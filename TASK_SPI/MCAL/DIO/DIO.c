/*
 * DIO.c
 *
 * Created: 7/9/2021 1:43:12 PM
 *  Author: DELLL
 */ 

#include "DIO.h"


enuErrorStatus_t DIO_Init(void)
{
	uint8_t i;
	for(i=0;i<DIO_GROUPS_NO;i++)
	{
		switch(astrDIOConfigParameters[i].enuPinNo)
		{
			case PA0:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRA_R,PA0);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRA_R,PA0);
					SET_BIT(PORTA_R,PA0);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRA_R,PA0);
			}
				break;
			}
			case PA1:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRA_R,PA1);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRA_R,PA1);
					SET_BIT(PORTA_R,PA1);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRA_R,PA1);
			}
				break;
			}
			case PA2:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRA_R,PA2);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRA_R,PA2);
					SET_BIT(PORTA_R,PA2);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRA_R,PA2);
			}
				break;
			}
			case PA3:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRA_R,PA3);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRA_R,PA3);
					SET_BIT(PORTA_R,PA3);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRA_R,PA3);
			}
				break;
			}
			case PA4:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRA_R,PA4);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRA_R,PA4);
					SET_BIT(PORTA_R,PA4);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRA_R,PA4);
			}
				break;
			}
			case PA5:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRA_R,PA5);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRA_R,PA5);
					SET_BIT(PORTA_R,PA5);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRA_R,PA5);
			}
				break;
			}
			case PA6:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRA_R,PA6);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRA_R,PA6);
					SET_BIT(PORTA_R,PA6);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRA_R,PA6);
			}
				break;
			}
			case PA7:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRA_R,PA7);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRA_R,PA7);
					SET_BIT(PORTA_R,PA7);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRA_R,PA7);
			}
				break;
			}
			
			case PB0:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRB_R,PB0);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRB_R,0);
					SET_BIT(PORTB_R,0);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRB_R,0);
			}
				break;
			}
			case PB1:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRB_R,1);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRB_R,1);
					SET_BIT(PORTB_R,1);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRB_R,1);
			}
				break;
			}
			case PB2:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRB_R,2);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRB_R,2);
					SET_BIT(PORTB_R,2);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRB_R,2);
			}
				break;
			}
			case PB3:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRB_R,3);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRB_R,3);
					SET_BIT(PORTB_R,3);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRB_R,3);
			}
				break;
			}
			case PB4:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRB_R,4);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRB_R,4);
					SET_BIT(PORTB_R,4);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRB_R,4);
			}
				break;
			}
			case PB5:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRB_R,5);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRB_R,5);
					SET_BIT(PORTB_R,5);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRB_R,5);
			}
				break;
			}
			case PB6:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRB_R,6);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRB_R,6);
					SET_BIT(PORTB_R,6);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRB_R,6);
			}
				break;
			}
			case PB7:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRB_R,7);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRB_R,7);
					SET_BIT(PORTB_R,7);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRB_R,7);
			}
				break;
			}
			case PC0:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRC_R,0);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRC_R,0);
					SET_BIT(PORTC_R,0);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRC_R,0);
			}
				break;
			}
			case PC1:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRC_R,1);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRC_R,1);
					SET_BIT(PORTC_R,1);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRC_R,1);
			}
				break;
			}
			case PC2:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRC_R,2);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRC_R,2);
					SET_BIT(PORTC_R,2);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRC_R,2);
			}
				break;
			}
			case PC3:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRC_R,3);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRC_R,3);
					SET_BIT(PORTC_R,3);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRC_R,3);
			}
				break;
			}
			case PC4:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRC_R,4);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRC_R,4);
					SET_BIT(PORTC_R,4);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRC_R,4);
			}
				break;
			}
			case PC5:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRC_R,5);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRC_R,5);
					SET_BIT(PORTC_R,5);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRC_R,5);
			}
				break;
			}
			case PC6:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRC_R,6);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRC_R,6);
					SET_BIT(PORTC_R,6);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRC_R,6);
			}
				break;
			}
			case PC7:
			{
				if(astrDIOConfigParameters[i].enuPinDir==INPUT)
				{
					SET_BIT(DDRC_R,7);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRC_R,7);
					SET_BIT(PORTC_R,7);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRC_R,7);
			}
				break;
			}
			case PD0:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRD_R,0);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRD_R,0);
					SET_BIT(PORTD_R,0);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRD_R,0);
			}
				break;
			}
			case PD1:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRD_R,1);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRD_R,1);
					SET_BIT(PORTD_R,1);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRD_R,1);
			}
				break;
			}
			case PD2:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRD_R,2);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRD_R,2);
					SET_BIT(PORTD_R,2);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRD_R,2);
			}
				break;
			}
			case PD3:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRD_R,3);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRD_R,3);
					SET_BIT(PORTD_R,3);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRD_R,3);
			}
				break;
			}
			case PD4:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRD_R,4);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRD_R,4);
					SET_BIT(PORTD_R,4);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRD_R,4);
			}
				break;
			}
			case PD5:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRD_R,5);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRD_R,5);
					SET_BIT(PORTD_R,5);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRD_R,5);
			}
				break;
			}
			case PD6:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRD_R,6);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRD_R,6);
					SET_BIT(PORTD_R,6);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRD_R,6);
			}
				break;
			}
			case PD7:
			{
				if(astrDIOConfigParameters[i].enuPinDir==OUTPUT)
				{
					SET_BIT(DDRD_R,7);
				}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
				(astrDIOConfigParameters[i].enuPullupResEn==PULL_UP_ENABLE))
				{
					CLR_BIT(DDRD_R,7);
					SET_BIT(PORTD_R,7);
			}else if((astrDIOConfigParameters[i].enuPinDir==INPUT)&&
			(astrDIOConfigParameters[i].enuPullupResEn==NO_CONNECTION))
			{
				CLR_BIT(DDRD_R,7);
			}
				break;
			}
		}
	}
	return E_OK;
}

enuErrorStatus_t DIO_Write(uint8_t u8GroupId, uint8_t u8Data)
{
		switch(astrDIOConfigParameters[u8GroupId].enuPinNo)
		{
			case PA0:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTA_R,PA0);
				}else
				{
					CLR_BIT(PORTA_R,PA0);
				}
				break;
			}
			case PA1:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTA_R,PA1);
				}else
				{
					CLR_BIT(PORTA_R,PA1);
				}
				break;
			}
			case PA2:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTA_R,PA2);
				}else
				{
					CLR_BIT(PORTA_R,PA2);
				}
				break;
			}
			case PA3:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTA_R,PA3);
				}else
				{
					CLR_BIT(PORTA_R,PA3);
				}
				break;
			}
			case PA4:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTA_R,PA4);
				}else
				{
					CLR_BIT(PORTA_R,PA4);
				}
				break;
			}
			case PA5:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTA_R,PA5);
				}else
				{
					CLR_BIT(PORTA_R,PA5);
				}
				break;
			}
			case PA6:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTA_R,PA6);
				}else
				{
					CLR_BIT(PORTA_R,PA6);
				}
				break;
			}
			case PA7:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTA_R,PA7);
				}else
				{
					CLR_BIT(PORTA_R,PA7);
				}
				break;
			}
			case PB0:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTB_R,0);
				}else
				{
					CLR_BIT(PORTB_R,0);
				}
				break;
			}
			case PB1:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTB_R,1);
				}else
				{
					CLR_BIT(PORTB_R,1);
				}
				break;
			}
			case PB2:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTB_R,2);
				}else
				{
					CLR_BIT(PORTB_R,2);
				}
				break;
			}
			case PB3:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTB_R,3);
				}else
				{
					CLR_BIT(PORTB_R,3);
				}
				break;
			}
			case PB4:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTB_R,4);
				}else
				{
					CLR_BIT(PORTB_R,4);
				}
				break;
			}
			case PB5:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTB_R,5);
				}else
				{
					CLR_BIT(PORTB_R,5);
				}
				break;
			}
			case PB6:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTB_R,6);
				}else
				{
					CLR_BIT(PORTB_R,6);
				}
				break;
			}
			case PB7:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTB_R,7);
				}else
				{
					CLR_BIT(PORTB_R,7);
				}
				break;
			}
			case PC0:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTC_R,0);
				}else
				{
					CLR_BIT(PORTC_R,0);
				}
				break;
			}
			case PC1:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTC_R,1);
				}else
				{
					CLR_BIT(PORTC_R,1);
				}
				break;
			}
			case PC2:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTC_R,2);
				}else
				{
					CLR_BIT(PORTC_R,2);
				}
				break;
			}
			case PC3:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTC_R,3);
				}else
				{
					CLR_BIT(PORTC_R,3);
				}
				break;
			}
			case PC4:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTC_R,4);
				}else
				{
					CLR_BIT(PORTC_R,4);
				}
				break;
			}
			case PC5:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTC_R,5);
				}else
				{
					CLR_BIT(PORTC_R,5);
				}
				break;
			}
			case PC6:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTC_R,6);
				}else
				{
					CLR_BIT(PORTC_R,6);
				}
				break;
			}
			case PC7:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTC_R,7);
				}else
				{
					CLR_BIT(PORTC_R,7);
				}
				break;
			}
			case PD0:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTD_R,0);
				}else
				{
					CLR_BIT(PORTD_R,0);
				}
				break;
			}
			case PD1:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTD_R,1);
				}else
				{
					CLR_BIT(PORTD_R,1);
				}
				break;
			}
			case PD2:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTD_R,2);
				}else
				{
					CLR_BIT(PORTD_R,2);
				}
				break;
			}
			case PD3:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTD_R,3);
				}else
				{
					CLR_BIT(PORTD_R,3);
				}
				break;
			}
			case PD4:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTD_R,4);
				}else
				{
					CLR_BIT(PORTD_R,4);
				}
				break;
			}
			case PD5:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTD_R,5);
				}else
				{
					CLR_BIT(PORTD_R,5);
				}
				break;
			}
			case PD6:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTD_R,6);
				}else
				{
					CLR_BIT(PORTD_R,6);
				}
				break;
			}
			case PD7:
			{
				if(u8Data==HIGH)
				{
					SET_BIT(PORTD_R,7);
				}else
				{
					CLR_BIT(PORTD_R,7);
				}
				break;
			}
		}
	return E_OK;
}

enuErrorStatus_t DIO_Read(uint8_t u8GroupId, uint8_t* pu8Data)
{
		switch(astrDIOConfigParameters[u8GroupId].enuPinNo)
		{
			case PA0:
			{
				*pu8Data=GET_BIT(PINA_R,PA0);
				break;
			}
			case PA1:
			{
				*pu8Data=GET_BIT(PINA_R,PA1);
				break;
			}
			case PA2:
			{
				*pu8Data=GET_BIT(PINA_R,PA2);
				break;
			}
			case PA3:
			{
				*pu8Data=GET_BIT(PINA_R,PA3);
				break;
			}
			case PA4:
			{
				*pu8Data=GET_BIT(PINA_R,PA4);
				break;
			}
			case PA5:
			{
				*pu8Data=GET_BIT(PINA_R,PA5);
				break;
			}
			case PA6:
			{
				*pu8Data=GET_BIT(PINA_R,PA6);
				break;
			}
			case PA7:
			{
				*pu8Data=GET_BIT(PINA_R,PA7);
				break;
			}
			case PB0:
			{
				*pu8Data=GET_BIT(PINB_R,0);
				break;
			}
			case PB1:
			{
				*pu8Data=GET_BIT(PINB_R,1);
				break;
			}
			case PB2:
			{
				*pu8Data=GET_BIT(PINB_R,2);
				break;
			}
			case PB3:
			{
				*pu8Data=GET_BIT(PINB_R,3);
				break;
			}
			case PB4:
			{
				*pu8Data=GET_BIT(PINB_R,4);
				break;
			}
			case PB5:
			{
				*pu8Data=GET_BIT(PINB_R,5);
				break;
			}
			case PB6:
			{
				*pu8Data=GET_BIT(PINB_R,6);
				break;
			}
			case PB7:
			{
				*pu8Data=GET_BIT(PINB_R,7);
				break;
			}
			case PC0:
			{
				*pu8Data=GET_BIT(PINC_R,0);
				break;
			}
			case PC1:
			{
				*pu8Data=GET_BIT(PINC_R,1);
				break;
			}
			case PC2:
			{
				*pu8Data=GET_BIT(PINC_R,2);
				break;
			}
			case PC3:
			{
				*pu8Data=GET_BIT(PINC_R,3);
				break;
			}
			case PC4:
			{
				*pu8Data=GET_BIT(PINC_R,4);
				break;
			}
			case PC5:
			{
				*pu8Data=GET_BIT(PINC_R,5);
				break;
			}
			case PC6:
			{
				*pu8Data=GET_BIT(PINC_R,6);
				break;
			}
			case PC7:
			{
				*pu8Data=GET_BIT(PINC_R,7);
				break;
			}
			case PD0:
			{
				*pu8Data=GET_BIT(PIND_R,0);
				break;
			}
			case PD1:
			{
				*pu8Data=GET_BIT(PIND_R,1);
				break;
			}
			case PD2:
			{
				*pu8Data=GET_BIT(PIND_R,2);
				break;
			}
			case PD3:
			{
				*pu8Data=GET_BIT(PIND_R,3);
				break;
			}
			case PD4:
			{
				*pu8Data=GET_BIT(PIND_R,4);
				break;
			}
			case PD5:
			{
				*pu8Data=GET_BIT(PIND_R,5);
				break;
			}
			case PD6:
			{
				*pu8Data=GET_BIT(PIND_R,6);
				break;
			}
			case PD7:
			{
				*pu8Data=GET_BIT(PIND_R,7);
				break;
			}
		}
	return E_OK;
}

enuErrorStatus_t DIO_Toogle(uint8_t u8GroupId)
{
		switch(astrDIOConfigParameters[u8GroupId].enuPinNo)
		{
			case PA0:
			{
				TOG_BIT(PORTA_R,PA0);
				break;
			}
			case PA1:
			{
				TOG_BIT(PORTA_R,PA1);
				break;
			}
			case PA2:
			{
				TOG_BIT(PORTA_R,PA2);
				break;
			}
			case PA3:
			{
				TOG_BIT(PORTA_R,PA3);
				break;
			}
			case PA4:
			{
				TOG_BIT(PORTA_R,PA4);
				break;
			}
			case PA5:
			{
				TOG_BIT(PORTA_R,PA5);
				break;
			}
			case PA6:
			{
				TOG_BIT(PORTA_R,PA2);
				break;
			}
			case PA7:
			{
				TOG_BIT(PORTA_R,PA7);
				break;
			}
			case PB0:
			{
				TOG_BIT(PORTB_R,0);
				break;
			}
			case PB1:
			{
				TOG_BIT(PORTB_R,1);
				break;
			}
			case PB2:
			{
				TOG_BIT(PORTB_R,2);
				break;
			}
			case PB3:
			{
				TOG_BIT(PORTB_R,3);
				break;
			}
			case PB4:
			{
				TOG_BIT(PORTB_R,4);
				break;
			}
			case PB5:
			{
				TOG_BIT(PORTB_R,5);
				break;
			}
			case PB6:
			{
				TOG_BIT(PORTB_R,6);
				break;
			}
			case PB7:
			{
				TOG_BIT(PORTB_R,7);
				break;
			}
			case PC0:
			{
				TOG_BIT(PORTC_R,0);
				break;
			}
			case PC1:
			{
				TOG_BIT(PORTC_R,1);
				break;
			}
			case PC2:
			{
				TOG_BIT(PORTC_R,2);
				break;
			}
			case PC3:
			{
				TOG_BIT(PORTC_R,3);
				break;
			}
			case PC4:
			{
				TOG_BIT(PORTC_R,4);
				break;
			}
			case PC5:
			{
				TOG_BIT(PORTC_R,5);
				break;
			}
			case PC6:
			{
				TOG_BIT(PORTC_R,6);
				break;
			}
			case PC7:
			{
				TOG_BIT(PORTC_R,7);
				break;
			}
			case PD0:
			{
				TOG_BIT(PORTD_R,0);
				break;
			}
			case PD1:
			{
				TOG_BIT(PORTD_R,1);
				break;
			}
			case PD2:
			{
				TOG_BIT(PORTD_R,2);
				break;
			}
			case PD3:
			{
				TOG_BIT(PORTD_R,3);
				break;
			}
			case PD4:
			{
				TOG_BIT(PORTD_R,4);
				break;
			}
			case PD5:
			{
				TOG_BIT(PORTD_R,5);
				break;
			}
			case PD6:
			{
				TOG_BIT(PORTD_R,6);
				break;
			}
			case PD7:
			{
				TOG_BIT(PORTD_R,7);
				break;
			}
		}
		return 0;	
}