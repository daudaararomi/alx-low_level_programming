#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *  binary_to_uint -  converts a binary number to an unsigned int.
 *@b: a pointer to the string of 0 and 1 chars
 *
 *Return:  the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	unsigned int bas2 = 1;
	unsigned int num = atoi(b);

	if (b  == NULL)
		return (0);
	if (num == 0)
		return  (0);
	while (num != 0)
	{
		unit = unit + (num % 10) * bas2;
		num = num / 10;
		bas2 = bas2 * 2;
	}
	return (unit);
}
