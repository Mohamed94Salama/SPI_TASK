/*
 * UART.c
 *
 * Created: 7/14/2021 7:30:59 PM
 *  Author: DELLL
 */ 

#include "UART.h"
/*Error handling*/
enuErrorStatus_t gError=E_ERROR;

/************************************************************
* Parameters (in) : None
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling 
* Description     : UART initialization
*************************************************************/
enuErrorStatus_t UART_Init(void)
{
	/*Set the Baud rate*/
	uint16_t UBRRVAL=((F_CPU/(16L*UART_BAUDRATE))-1);
	UBRRH_R=(uint8_t)(UBRRVAL>>8);
	UBRRL_R=(uint8_t)(UBRRVAL);
	
	/*UART Transmitter and Receiver Enable*/
	UCSRB_R=(1<<TXEN_B)|(1<<RXEN_B);
	
	/* DATA BITS*/
	uint8_t data=UART_DATA_BITS;
	if(data==5)
	{
		CLR_BIT(UCSRC_R,UCSZ1_B);
		CLR_BIT(UCSRC_R,UCSZ0_B);
	}else if(data==6)
	{
		CLR_BIT(UCSRC_R,UCSZ1_B);
		SET_BIT(UCSRC_R,UCSZ0_B);		
	}else if(data==7)
	{
		SET_BIT(UCSRC_R,UCSZ1_B);
		CLR_BIT(UCSRC_R,UCSZ0_B);		
	}else if(data==8)
	{
		SET_BIT(UCSRC_R,UCSZ1_B);
		SET_BIT(UCSRC_R,UCSZ0_B);
	}else if (data==9)
	{
		SET_BIT(UCSRB_R,UCSZ2_B);
		SET_BIT(UCSRC_R,UCSZ1_B);
		SET_BIT(UCSRC_R,UCSZ0_B);		
	}
	/*PARITY*/
	uint8_t parity=UART_PARITY_BIT;
	if(parity==0)
	{
		CLR_BIT(UCSRC_R,UPM1_B);
		CLR_BIT(UCSRC_R,UPM0_B);
	}else if(parity==1)
	{
		SET_BIT(UCSRC_R,UPM1_B);
		SET_BIT(UCSRC_R,UPM0_B);	
	}else if(parity==2)
	{
		SET_BIT(UCSRC_R,UPM1_B);
		CLR_BIT(UCSRC_R,UPM0_B);
	}
	/*STOP BITS*/
	uint8_t stop = UART_STOP_BITS;
	if(stop==1)
	{
		CLR_BIT(UCSRC_R,USBS_B);
	}else if(stop==2)
	{
		SET_BIT(UCSRC_R,USBS_B);
	}
	gError=E_OK;
	return gError;
}
/************************************************************
* Parameters (in) : u16Data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling 
* Description     : Sending a data with UART
*************************************************************/
enuErrorStatus_t UART_SendData(uint16_t u16Data)
{
	/* Return an ERROR if UART not initialized*/
	if(gError==E_ERROR)
	{
		return E_ERROR;
	}
	gError=E_OK;
	/*Wait for the empty flag to be set*/
	while(!GET_BIT(UCSRA_R,UDRE_B));
	UDR_R=u16Data;
	return gError;
}
/************************************************************
* Parameters (in) : None
* Parameters (out): pu16Data
* Return Value    : enuErrorStatus_t - For error handling 
* Description     : Receiving a data with UART
*************************************************************/
enuErrorStatus_t UART_ReceiveData(uint16_t* pu16Data)
{
	if(gError==E_ERROR)
	{
		return E_ERROR;
	}
	gError=E_OK;
	/* Wait for the Receive complete flag to be set*/
	while(!GET_BIT(UCSRA_R,RXC_B));
	*pu16Data=UDR_R;
	return gError;
}
/************************************************************
* Parameters (in) : None
* Parameters (out): pu16Data
* Return Value    : enuErrorStatus_t - For error handling 
* Description     : Receiving a data with UART without polling
*************************************************************/
enuErrorStatus_t UART_RecieveDataNoBLOCK(uint16_t* pu16Data)
{
	if(gError==E_ERROR)
	{
		return E_ERROR;
	}
	gError=E_OK;
	if(GET_BIT(UCSRA_R,RXC_B))
	{
		*pu16Data=UDR_R;
	}
	return gError;
}
/************************************************************
* Parameters (in) : *pu8String
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling 
* Description     : Sending a string with UART
*************************************************************/
enuErrorStatus_t UART_SendString(uint8_t* pu8String)
{
	if(gError==E_ERROR)
	{
		return E_ERROR;
	}
	gError=E_OK;
	uint8_t i=0;
	for(i=0;i<MAX_LEN;i++)
	{
		UART_SendData(pu8String[i]);
		if(pu8String[i]=='\r')
		{
			break;
		}		
	}
	return gError;
}
/************************************************************
* Parameters (in) : None
* Parameters (out): pu8String
* Return Value    : enuErrorStatus_t - For error handling 
* Description     : Sending a string with UART
*************************************************************/
enuErrorStatus_t UART_ReceiveString(uint8_t* pu8String,uint8_t max_length)
{
	if(gError==E_ERROR)
	{
		return E_ERROR;
	}
	gError=E_OK;
	uint8_t i=0;
	for(i=0;i<max_length;i++)
	{
		UART_ReceiveData(&pu8String[i]);
		if((pu8String[i]=='\r')||(pu8String[i]=='\n'))
		{
			//pu8String[i]=0;
			break;
		}
	}
		
		/*if(pu8String[6]=='\r')
		{
			DIO_Write(4,HIGH);
		}*/

	return gError;
}
/************************************************************
* Parameters (in) : u16Data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Sending a data with UART without polling
*************************************************************/
enuErrorStatus_t UART_SendDataNoBLOCK(uint16_t u16Data)
{
	if(gError==E_ERROR)
	{
		return E_ERROR;
	}
	gError=E_OK;
	if(GET_BIT(UCSRA_R,UDRE_B))
	{
		UDR_R=(uint8_t)u16Data;
	}
	return gError;
}