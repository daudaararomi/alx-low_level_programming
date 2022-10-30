#include "main.h"
#include <stdio.h>
/**
 *get_bit - returns the value of a bit at a given index.
 *@n: number whose bit to get
 *@index: index of bit locate
 *
 *Return: the value of bit located
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int bit;

       	while (i <= index && n !=  0)
	{
		bit = n & 1;
		n = n >> 1;
		i++;
	}
	return (bit);
}
