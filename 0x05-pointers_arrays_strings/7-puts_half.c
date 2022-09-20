#include "main.h"
#include <stdio.h>
/**
 * puts_half  - print half of string
 * @str : string variable
 * Return: nothing
 */

void puts_half(char *str)
{
	int c = 0;
	int i = 0;
	int n;

	while (*(str + c) != '\0')
	{
		c = c + 1;
	}

	if ( c % 2 == 0)
		n = (c - 1) / 2;

	if ( c % 2 != 0)
		n = c / 2 ;

	while ((n + i) <= c)
	{
		if (*(str + n + i) != '\0')
		{
			putchar(*(str + n + i));
		}
		i = i + 1;
	}

	putchar('\n');
}
