﻿/*
 * BitMath.h
 *
 * Created: 11/12/2020 11:30:11 م
 *  Author: GASSER
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_


#define setB(reg,bit)     reg|=(1<<bit)
#define clrB(reg,bit)     reg&=~(1<<bit)
#define getB(reg,bit)     ((reg>>bit) & 1)
#define toggleB(reg,bit)  reg^=(1<<bit)


#endif /* BITMATH_H_ */