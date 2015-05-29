/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "uart-terminal.h"
#include <stdint.h>
#include <stdbool.h>

#define TERMINAL_MAX_ROUTINE (10)


static char* terminal_commandTable[TERMINAL_MAX_ROUTINE];
func_ptr_t terminal_routineTable[TERMINAL_MAX_ROUTINE];
static uint8_t terminal_currentCommandCount = 0;
static bool terminal_inited = false;

void terminal_parse(char serial_in[]);
void terminal_helpFunc();
inline void terminal_printPrompt();


void terminal_init() {
    if (terminal_inited) {
        return;
    }
    
    USBUART_Start(0u, USBUART_3V_OPERATION);

    char* help = "help\0";
    terminal_commandTable[0] = help;

    terminal_routineTable[0] = &terminal_helpFunc;

    terminal_currentCommandCount = 1;
    terminal_inited = true;
}

void terminal_registerCommand(char newCommand[], func_ptr_t routine) {
    if (!terminal_inited) {
        terminal_init();
    }
    if (terminal_currentCommandCount >= TERMINAL_MAX_ROUTINE) {
        //Error handling when the vector table is full
        return;
    }
    terminal_commandTable[terminal_currentCommandCount] = newCommand;
    terminal_routineTable[terminal_currentCommandCount] = routine;
    terminal_currentCommandCount++;
}

void terminal_helpFunc() {
    uint8_t i = 0;
    for (i = 0; i < terminal_currentCommandCount; i++) {
        char iStr[2];
        iStr[0] = i + '0';
        iStr[1] = '\0';
        while(USBUART_CDCIsReady() == 0u);
        USBUART_PutString(iStr);
        while(USBUART_CDCIsReady() == 0u);
        USBUART_PutString(". ");
        while(USBUART_CDCIsReady() == 0u);
        USBUART_PutString(terminal_commandTable[i]);
        while(USBUART_CDCIsReady() == 0u);
        USBUART_PutString("\n");
    }
}

/****************************************************************************
* Function Name: terminal_echo(char serial_in[], uint8* track)
*****************************************************************************
*
* Summary:
*  Echos back to the terminal the current key stroke. If enter key is pressed,
*  this function will call terminal_parse() to get the inputed command
*
* Parameters:
*  serial_in[]: array to store the inputs, array of chars
*  track: pointer to track which keeps track of the number of inputs i.e. chars
*
* Return:
*  None.
*
****************************************************************************/
void terminal_run()
{
    static uint8_t track = 0;
    static char serial_in[100];

    uint8 buffer = 0;
    uint8_t buf[100];

    buffer = 0;

    if(USBUART_IsConfigurationChanged() != 0u) /* Host could send double SET_INTERFACE request */
    {
        if(USBUART_GetConfiguration() != 0u)   /* Init IN endpoints when device configured */
        {
            /* Enumeration is done, enable OUT endpoint for receive data from Host */
            USBUART_CDC_Init();
        }
    }
    if(USBUART_GetConfiguration() != 0u)    /* Service USB CDC when device configured */
    {
        if(USBUART_DataIsReady() != 0u)               /* Check for input data from PC */
        {
            uint16_t count = USBUART_GetAll(buf);
            uint16_t i = 0;
            for (i = 0; i < count; i++) {
                buffer = buf[i];
                serial_in[track] = (char)buffer;
                while(USBUART_CDCIsReady() == 0u);    /* Wait till component is ready to send more data to the PC */
                USBUART_PutChar((char)buffer);       /* Send data back to PC */

                if(buffer == 127)           // checks for backspace = 127
                {
                    if((track) != 0) {        // subtract only if not at the front of the array
                        (track)--;
                        while(USBUART_CDCIsReady() == 0u);    /* Wait till component is ready to send more data to the PC */
                        USBUART_PutString("\b \b");       /* Send data back to PC */
                    }
                }
                else
                    (track)++;

                if((char)buffer == '\r')        // if enter key was pressed
                {
                    serial_in[track-1] = '\0';
                    terminal_parse(serial_in);
                    track = 0;
                    break;
                }
            }
        }
    }
}


/****************************************************************************
* Function Name: terminal_parse(char serial_in[])
*****************************************************************************
*
* Summary:
*  Called when the user press enter. Takes the serial_in[] array and compares
*  it with hard coded commands.
*
* Parameters:
*  serial_in[]: array of inputs
*
* Return:
*  None.
*
****************************************************************************/
void terminal_parse(char serial_in[])
{
    // char* helpString = "\r\n1. Help\r\n2. Print ADC\r\n        Press ESC to stop conversions\r\n3. Something3\n\r";         //menu
    // double volts;           //used to store adc value
    // char adc_val[BUFFER_LEN];       //used to print adc value
    // uint8 buffer;

    uint8_t i = 0;
    for (i = 0; i < terminal_currentCommandCount; i++) {
        char iStr[2];
        iStr[0] = i + '0';
        iStr[1] = '\0';
        if (stricmp(serial_in, terminal_commandTable[i]) == 0 ||  stricmp(serial_in, iStr) == 0) {
            while(USBUART_CDCIsReady() == 0u);
            // USBUART_PutString("helping\n");
            (*terminal_routineTable[i])();
            terminal_printPrompt();
            return; 
        }
    }

    if (stricmp(serial_in, "") != 0) {
        while(USBUART_CDCIsReady() == 0u);    /* Wait till component is ready to send more data to the PC */
        USBUART_PutString("Not a recognized command, please use 'help' to see commands.");       /* Send data to PC */
    }
    terminal_printPrompt();
}

inline void terminal_printPrompt() {
    while(USBUART_CDCIsReady() == 0u);
    USBUART_PutString("\n");
    while(USBUART_CDCIsReady() == 0u);
    USBUART_PutString(TERMINAL_NODE_NAME);
    while(USBUART_CDCIsReady() == 0u);
    USBUART_PutString("> ");
}

/* [] END OF FILE */
