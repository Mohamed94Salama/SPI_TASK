/*****************************************************************************
* Task		 : UART Driver
* File Name	 : UART.h
* Description: header file for UART driver
* Author	 : Kariman
* Date		 : Jul 13, 2021
******************************************************************************/

#ifndef MCAL_UART_UART_H_
#define MCAL_UART_UART_H_

#define MAX_LEN	255

/*- INCLUDES -----------------------------------------------*/
#include "../../LIB/Register.h"
#include "../../LIB/Register_Cont.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MANIPULATE.h"
#include "UART_Cfg.h"
#include "../DIO/DIO.h"

//#define       F_CPU    8000000UL

// define some macros
//#define BAUD 9600                                   // define baud
//#define BAUDRATE (((F_CPU)/(16UL*BAUD))-1)            // set baud rate value for UBRR

/*- FUNCTION PROTOTYPES ----------------------------------*/
/*************************************************************************************************
* Parameters (in) : None
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to initialize the UART protocol
*************************************************************************************************/
enuErrorStatus_t UART_Init(void);

/*************************************************************************************************
* Parameters (in) : u8_Data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to send data via UART
*************************************************************************************************/
enuErrorStatus_t UART_SendData(uint16_t u16Data);

/*************************************************************************************************
* Parameters (in) : None
* Parameters (out): pu8_Data
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to receive data via UART
*************************************************************************************************/
enuErrorStatus_t UART_ReceiveData(uint16_t* pu16Data);

/*************************************************************************************************
* Parameters (in) : None
* Parameters (out): pu8_Data
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to receive data via UART
*************************************************************************************************/
enuErrorStatus_t UART_RecieveDataNoBLOCK(uint16_t* pu16Data);

/*************************************************************************************************
* Parameters (in) : u8_String
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to send string via UART
*************************************************************************************************/
enuErrorStatus_t UART_SendString(uint8_t* pu8String);

/*************************************************************************************************
* Parameters (in) : None
* Parameters (out): u8_String
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to receive string via UART
*************************************************************************************************/
enuErrorStatus_t UART_ReceiveString(uint8_t* pu8String,uint8_t max_length);

/*************************************************************************************************
* Parameters (in) : u8_Data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling if the user input an invalid parameter
* Description     : A function to send data via UART without blocking the system
*************************************************************************************************/
enuErrorStatus_t UART_SendDataNoBLOCK(uint16_t u16Data);


#endif /* MCAL_UART_UART_H_ */
