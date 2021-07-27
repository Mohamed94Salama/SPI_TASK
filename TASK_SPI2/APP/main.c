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

    while (1) 
    {
	uint8_t* x2;
	
	SPI_SlaveReceiveString(x2);

	UART_SendString(x2);
	
    }
}

