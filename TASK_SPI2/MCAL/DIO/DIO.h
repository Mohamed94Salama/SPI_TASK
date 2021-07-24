#ifndef DIO_H_
#define DIO_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MANIPULATE.h"
#include "DIO_Cfg.h"
#include "../../LIB/Register.h"

#define LOW 0
#define HIGH 1
typedef enum {PA0, PA1, PA2, PA3, PA4, PA5, PA6, PA7,
			  PB0, PB1, PB2, PB3, PB4, PB5, PB6, PB7,
			  PC0, PC1, PC2, PC3, PC4, PC5, PC6, PC7,
			  PD0, PD1, PD2, PD3, PD4, PD5, PD6, PD7} enuDIOPinNo_t;
typedef enum {INPUT, OUTPUT} enuDIOPinDir_t;
typedef enum {NO_CONNECTION, PULL_UP_ENABLE} enuDIOPullupResEn_t;

typedef struct
{
	/* Selecting the pin number in that specific port selected */
	enuDIOPinNo_t enuPinNo;
	/* Selecting the direction of data on the selected pin */
	enuDIOPinDir_t enuPinDir;
	/* Selecting whether a pull-up resistor is connected to the selected pin or not */
	enuDIOPullupResEn_t enuPullupResEn;
} strDIOConfigType_t;

extern const strDIOConfigType_t astrDIOConfigParameters[DIO_GROUPS_NO];

/* A function to initialize all the DIO groups according to the configuration */
enuErrorStatus_t DIO_Init(void);
/* A function to write a digital value into the selected DIO pin */
enuErrorStatus_t DIO_Write(uint8_t u8GroupId, uint8_t u8Data);
/* A function to read a digital value from the selected DIO pin */
enuErrorStatus_t DIO_Read(uint8_t u8GroupId, uint8_t* pu8Data);
/* A function to toggle the selected DIO pin */
enuErrorStatus_t DIO_Toogle(uint8_t u8GroupId);
#endif /* DIO_H_ */