/*
 * TASK_SPI2.c
 *
 * Created: 7/16/2021 8:06:50 PM
 * Author : DELLL
 */ 

#include "../MCAL/UART/UART.h"
#include "../MCAL/SPI/SPI_Slave.h"

int main(void)
{
    UART_Init();
	SPI_SlaveInit();

	//UART_SendString(x2);
	/*if(x2[1]=='O')
	{
		DIO_Write(4,HIGH);
	}*/

    while (1) 
    {
	uint8_t* x2;
	SPI_SlaveReceiveString(x2);
	uint8_t r=0;
	/*while(x2[r] != '\r')
	{
		UART_SendData(x2[r]);
		r++;
	}*/
	/*if(x2[1]=='O')
	{
		DIO_Write(4,HIGH);
	}*/
	UART_SendString(x2);
	//UART_SendString(x2);
		//DIO_Write(4,HIGH);
		//UART_SendString("SALAMA");

    }
}

