/*
 * SPI.h
 *
 * Created: 7/15/2021 10:29:04 PM
 *  Author: DELLL
 */ 


#ifndef SPI_SLAVE_H_
#define SPI_SLAVE_H_

/* Includes */
#include "../../LIB/BIT_MANIPULATE.h"
#include "../DIO/DIO.h"
#include "../../LIB/STD_TYPES.h"
#include "SPI_Cfg.h"
#include "../../LIB/Register.h"
#include "../../LIB/Register_Cont.h"

/* Functions prototypes */
enuErrorStatus_t SPI_SlaveInit(void);
enuErrorStatus_t SPI_SlaveTransmit(uint8_t data);
enuErrorStatus_t SPI_SlaveReceive(uint8_t* data);
enuErrorStatus_t SPI_SlaveTransmitString(uint8_t* pu8data);
enuErrorStatus_t SPI_SlaveReceiveString(uint8_t* pu8data);

/* Defining the system frequency */
#define F_CPU 8000000ul

#endif /* SPI_SLAVE_H_ */