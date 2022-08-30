/*
Nathanial Loy
8/30/22
remembering how to use and perform C.
Working on performing bitwise operations
*/
#include "nloy_binaryutils.h" // header file that is used

void setbit(uint32_t* addr, uint8_t whichbit) 
{
	uint32_t temp = 1 << whichbit;
	uint32_t start = *addr | temp;
	*addr = start;
};
void clearbit(uint32_t* addr, uint8_t whichbit)
{
	uint32_t temp = 1 << whichbit;
	uint32_t start = *addr &~ temp;

	*addr = start;

};
void setbits(uint32_t* addr, uint8_t bitmask)
{

};

void clearbits(uint32_t* addr, uint8_t bitmask)
{

};

void display_binary(uint32_t* addr, uint8_t num)
{

};
