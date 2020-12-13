/*
 * Omar's Project.c
 *
 * Created: 11/12/2020 10:37:18 م
 * Author : GASSER
 */ 


#include <avr/io.h>
#include "avr/interrupt.h"
#include "STD_types.h"
#include "DIO.h"
#include "LCD.h"


int main(void)
{
	DIO_Init();
	SPI_Init('S');
	LCD_Init();
	LCD_clr();
	
	LCD_cmd(0x85);
	LCD_StringPos("Welcome to",1,2);
	LCD_StringPos("Omar.A Project",2,2);
	while (1)	{				if( SPI_Receive() == 0x11 )		{			DIO_write(DIO_channelC6,STD_high);		}						if( SPI_Receive() == 0x22 )		{			DIO_write(DIO_channelC6,STD_low);		}					}


	
}