/*
 * SPI.h
 *
 * Created: 7/15/2021 10:29:04 PM
 *  Author: DELLL
 */ 


#ifndef SPI_MASTER_H_
#define SPI_MASTER_H_

/* Includes */
#include "../../LIB/BIT_MANIPULATE.h"
#include "../DIO/DIO.h"
#include "../../LIB/STD_TYPES.h"
#include "SPI_Cfg.h"
#include "../../LIB/Register.h"
#include "../../LIB/Register_Cont.h"

/* Functions prototypes */
enuErrorStatus_t SPI_MasterInit(void);
enuErrorStatus_t SPI_MasterTransmit(uint8_t data);
enuErrorStatus_t SPI_MasterReceive(uint8_t* data);
enuErrorStatus_t SPI_MasterTransmitString(uint8_t* pu8data);
enuErrorStatus_t SPI_MasterReceiveString(uint8_t* pu8data);

/* Defining the system Frequency */
#define F_CPU 8000000ul

#endif /* SPI_MASTER_H_ */