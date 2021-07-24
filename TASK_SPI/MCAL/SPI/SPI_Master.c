/*
 * SPI.c
 *
 * Created: 7/15/2021 10:28:49 PM
 *  Author: DELLL
 */ 

#include "SPI_Master.h"

enuErrorStatus_t gError2 = E_ERROR;

/************************************************************
* Parameters (in) : None
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : SPI initialization
*************************************************************/
enuErrorStatus_t SPI_MasterInit(void)
{
	/* Initialize the DIO pins , MOSI SCK SS ---> Output , MISO ---> Input*/
	DIO_Init();
	/* Enabling the SPI*/
	//SET_BIT(SPCR_R,SPE_B);
	SPCR_R=(1<<SPE_B)|(1<<MSTR_B)|(1<<SPR0_B);
	/* Enabling the master */
	/*SET_BIT(SPCR_R,MSTR_B);
	
	uint8_t polarity = CPOL_MASTER;	
	if(polarity==0)
	{
		CLR_BIT(SPCR_R,CPOL_B);
	}else if(polarity==1)
	{
		SET_BIT(SPCR_R,CPOL_B);
	}
	
	uint8_t phase = CPHA_MASTER;
	if(phase == 0)
	{
		CLR_BIT(SPCR_R,CPHA_B);
	}else if(phase == 1)
	{
		SET_BIT(SPCR_R,CPHA_B);
	}
	
	uint8_t order = ORDER_MASTER;
	if(order == 0)
	{
		CLR_BIT(SPCR_R,DORD_B);
	}else if(order == 1)
	{
		SET_BIT(SPCR_R,DORD_B);
	}
	
	uint8_t en_int = SPI_INT_MASTER;
	if(en_int == 0)
	{
		CLR_BIT(SPCR_R,SPIE_B);
	}else if(en_int == 1)
	{
		SET_BIT(SPCR_R,SPIE_B);
	}
	
	uint8_t prescale;
	if(prescale == 0)
	{
		CLR_BIT(SPSR_R,SPI2X_B);
		CLR_BIT(SPCR_R,SPR1_B);
		CLR_BIT(SPCR_R,SPR0_B);
	}else if(prescale == 1)
	{
		CLR_BIT(SPSR_R,SPI2X_B);
		CLR_BIT(SPCR_R,SPR1_B);
		SET_BIT(SPCR_R,SPR0_B);		
	}else if(prescale == 2)
	{
		CLR_BIT(SPSR_R,SPI2X_B);
		SET_BIT(SPCR_R,SPR1_B);
		CLR_BIT(SPCR_R,SPR0_B);		
	}else if(prescale == 3)
	{
		CLR_BIT(SPSR_R,SPI2X_B);
		SET_BIT(SPCR_R,SPR1_B);
		SET_BIT(SPCR_R,SPR0_B);		
	}else if(prescale == 4)
	{
		SET_BIT(SPSR_R,SPI2X_B);
		CLR_BIT(SPCR_R,SPR1_B);
		CLR_BIT(SPCR_R,SPR0_B);		
	}else if(prescale == 5)
	{
		SET_BIT(SPSR_R,SPI2X_B);
		CLR_BIT(SPCR_R,SPR1_B);
		SET_BIT(SPCR_R,SPR0_B);		
	}else if(prescale == 6)
	{
		SET_BIT(SPSR_R,SPI2X_B);
		SET_BIT(SPCR_R,SPR1_B);
		CLR_BIT(SPCR_R,SPR0_B);		
	}*/
	gError2 = E_OK;
	return gError2;
}

/************************************************************
* Parameters (in) : uint8_t data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Function for transmitting a byte of data
*************************************************************/

enuErrorStatus_t SPI_MasterTransmit(uint8_t data)
{
	if(gError2==E_ERROR)
	{
		return E_ERROR; // SPI not initialized
	}
	gError2=E_OK;
	
	/* Start Transmission */
	SPDR_R=data;
	
	/* Wait for transmission to complete */
	while(!GET_BIT(SPSR_R,SPIF_B));

	return gError2;
}

/************************************************************
* Parameters (in) : uint8_t* data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Function for receiving a byte of data
*************************************************************/
enuErrorStatus_t SPI_MasterReceive(uint8_t* data)
{
		if(gError2==E_ERROR)
		{
			return E_ERROR; // SPI not initialized
		}
		gError2=E_OK;
		
	/* Wait for reception complete */
	while(!GET_BIT(SPSR_R,SPIF_B));
	
	/* Retrieve the SPDR contents */
	*data = SPDR_R;
	
	return gError2;
}

/************************************************************
* Parameters (in) : uint8_t* data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Function for transmitting a string
*************************************************************/
enuErrorStatus_t SPI_MasterTransmitString(uint8_t* pu8data)
{
	if(gError2==E_ERROR)
	{
		return E_ERROR; // SPI not initialized
	}
	gError2=E_OK;
	
	uint8_t i=0;
	/*while(pu8data[i] != '\0')
	{
		SPDR_R = pu8data[i];
		while(!GET_BIT(SPSR_R,SPIF_B));
		i++;
	}*/
	for(i=0;i<MAX_LEN;i++)
	{
		SPDR_R = pu8data[i];
		while(!GET_BIT(SPSR_R,SPIF_B));
		if(pu8data[i]=='\r')
		{
			break;
		}
	}
	return gError2;
}

/************************************************************
* Parameters (in) : uint8_t* data
* Parameters (out): None
* Return Value    : enuErrorStatus_t - For error handling
* Description     : Function for receiving a string
*************************************************************/
enuErrorStatus_t SPI_MasterReceiveString(uint8_t* pu8data)
{
	if(gError2==E_ERROR)
	{
		return E_ERROR; // SPI not initialized
	}
	gError2=E_OK;
	
	uint8_t i=0;
	for(i=0;i<MAX_LEN;i++)
	{
		SPI_MasterReceive(&pu8data[i]);
		if(pu8data[i]=='\0')
		{
			break;
		}
	}
	
	return gError2;
}