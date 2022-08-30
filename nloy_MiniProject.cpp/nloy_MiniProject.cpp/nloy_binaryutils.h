
/*
Nathanial Loy
8/30/22
remembering how to use and perform C.
Working on performing bitwise operations
*/

#pragma once
#ifndef OKCOMPUTER
#define OKCOMPUTER

#include <stdint.h> //input-ouput functions
#include <stdio.h> //various basic functions
#include <math.h> // various math functions

void setbit(uint32_t* addr, uint8_t whichbit);
void clearbit(uint32_t* addr, uint8_t whichbit);
void setbits(uint32_t* addr, uint8_t bitmask);
void clearbits(uint32_t* addr, uint8_t bitmask);
void display_binary(uint32_t* addr, uint8_t num);








#endif 

