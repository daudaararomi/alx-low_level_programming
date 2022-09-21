#include "main.h"
#include <stdio.h>
/**
 * _atoi  - convert string to integer
 * @s : pointer to the string
 * Return: nothing
 */

int _atoi(char *s)
{
       	int *int_i;

	while (*s  != '\0')
	{
		if (*s == 43 && *s == 45 AND  *s >= 48 && *s <= 57)
		{
			*int_i = (int) *s;
		}
		s++;
		int_i++;
	}

	return (int_i);
}
