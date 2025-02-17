﻿/*
 * DIO_CFG.c
 *
 * Created: 11/12/2020 11:31:44 م
 *  Author: GASSER
 */ 




#include "DIO_CFG.h"


void DIO_Init(void)
{
	const Dio_PinCFG PinCfg[] =
	{
		//PORTA
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		//PORTB
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{input,STD_low},
		{output,STD_high},
		//PORTC
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		//PORTD
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high},
		{output,STD_high}
	};
	
	Uint8 count=0;
	DIO_PortTypes portX;
	DIO_ChannelTypes ChannelPos;
	
	for (count=DIO_channelA0; count<PINCOUNT ; count++)
	{
		portX = count/8;
		ChannelPos = count%8;
		
		switch (portX)
		{
			case DIO_portA:
			if (PinCfg[count].PinDir == output)
			{
				setB (DDRA_reg,ChannelPos);
			}
			else
			{
				clrB (DDRA_reg,ChannelPos);
			}
			break;
		

			case DIO_portB:
			if (PinCfg[count].PinDir == output)
			{
				setB (DDRB_reg,ChannelPos);
			}
			else
			{
				clrB (DDRB_reg,ChannelPos);
			}
			break;
		

			case DIO_portC:
			if (PinCfg[count].PinDir == output)
			{
				setB (DDRC_reg,ChannelPos);
			}
			else
			{
				clrB (DDRC_reg,ChannelPos);
			}
			break;
		

			case DIO_portD:
			if (PinCfg[count].PinDir == output)
			{
				setB (DDRD_reg,ChannelPos);
			}
			else
			{
				clrB (DDRD_reg,ChannelPos);
			}
			break;
			
			
		}
	}
}
