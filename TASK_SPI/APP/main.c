/*
 * TASK_SPI.c
 *
 * Created: 7/16/2021 7:55:04 PM
 * Author : DELLL
 */ 
#include "../MCAL/UART/UART.h"
#include "../MCAL/SPI/SPI_Master.h"

int main(void)
{
    UART_Init();
	SPI_MasterInit();
	uint8_t* x1;



    while (1) 
    {
//	DIO_Write(4,HIGH);	
	UART_ReceiveString(x1,MAX_LEN);
	//DIO_Write(4,HIGH);
	volatile uint16_t i;
	for(i=0;i<10000;i++)
	{
		
	}
	/*if(strlen(x1)==8)
	{
		DIO_Write(4,HIGH);
	}*/
	SPI_MasterTransmitString(x1);
    }
}

