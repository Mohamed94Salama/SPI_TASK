/*
 * SPI_Cfg.h
 *
 * Created: 7/15/2021 10:29:27 PM
 *  Author: DELLL
 */ 


#ifndef SPI_CFG_H_
#define SPI_CFG_H_

/* 0 for the rising edge is the leading edge ,
 1 for falling is the leading */
#define CPOL_MASTER	0

/*0 for Sampling t the leading edge ,
 1 for Setup at the leading edge */
#define CPHA_MASTER 0

/*0 for MSB to be sent first ,
 1 for LSB to be sent first */
#define ORDER_MASTER	0

/*0 for disabling the interrupt , 1 for enabling it*/
#define SPI_INT_MASTER	0

/*0 for prescale by 4 ,
 1 for prescale by 16,
 2 for prescale by 64,
 3 for prescale by 128,
 4 for prescale by 2,
 5 for prescale by 8,
 6 for prescale by 32*/
#define SPI_PRESCALE	1





#endif /* SPI_CFG_H_ */