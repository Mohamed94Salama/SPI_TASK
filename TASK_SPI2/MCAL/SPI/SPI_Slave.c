/*
 * SPI.c
 *
 * Created: 7/15/2021 10:28:49 PM
 *  Author: DELLL
 */ 

#include "SPI_Slave.h"

/************************************************************
* Parameters (in) : None
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : SPI slave initialization
*************************************************************/
enuErrorStatus_t SPI_SlaveInit(void)
{
	/* Initialize the DIO pins , MOSI SCK SS ---> Input , MISO ---> Output*/
	DIO_Init();
	
	/* Enabling the SPI*/
	SPCR_R = (1<<SPE_B)|(1<<SPR0_B);
	
	return E_OK;
}

/************************************************************
* Parameters (in) : uint8_t data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Slave transmitting a byte to the Master
*************************************************************/
enuErrorStatus_t SPI_SlaveTransmit(uint8_t data)
{
	/* Start Transmission */
	SPDR_R=data;
	
	/* Wait for transmission to complete */
	while(!GET_BIT(SPSR_R,SPIF_B));
	
	return E_OK;
}

/************************************************************
* Parameters (in) : uint8_t* data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Slave receive data from the Master
*************************************************************/
enuErrorStatus_t SPI_SlaveReceive(uint8_t* data)
{
	/* Wait for reception complete */
	while(!GET_BIT(SPSR_R,SPIF_B));

	/* Retrieve the SPDR contents */
	*data = SPDR_R;	
	
	return E_OK;
}

/************************************************************
* Parameters (in) : uint8_t* data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Slave transmitting a string
*************************************************************/
enuErrorStatus_t SPI_SlaveTransmitString(uint8_t* pu8data)
{
	uint8_t i=0;
	while(pu8data[i] != '\0')
	{
		SPDR_R = pu8data[i];
		while(!GET_BIT(SPSR_R,SPIF_B));
		i++;
	}
	return E_OK;
}

/************************************************************
* Parameters (in) : uint8_t* pu8data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Slave receiving a string
*************************************************************/
enuErrorStatus_t SPI_SlaveReceiveString(uint8_t* pu8data)
{
	uint8_t i=0;
	for(i=0;i<MAX_LEN;i++)
	{
		SPI_SlaveReceive(&pu8data[i]);
		if(pu8data[i]=='\r')
		{	
			break;
		}
	}

	return E_OK;
}