#include "main.h"
#include <stdio.h>
/**
 *set_bit -  sets the value of a bit to 1 at a given index.
 *@n: number whose bit to set
 *@index: index of bit set
 *
 *Return: the value of bit located
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	return (*n ^ (1 << (index-1)));
}
