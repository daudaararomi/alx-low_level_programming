#include "main.h"
#include <stdio.h>
/**
 * print_binary -  prints the binary representation of a number
 *@n: the number to print
 *
 * Return: the binary number
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;
	while (mask > 0)
	{
		if ((n & mask) == 0)
			putchar('0');
		else
			putchar('1');
		mask = mask >> 1;
	}
}
