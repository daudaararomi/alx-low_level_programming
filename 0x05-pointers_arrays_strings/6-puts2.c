#include "main.h"
#include <stdio.h>
/**
 * puts2  - print every other characters
 * @s : string variable
 * Return: nothing
 */

void puts2(char *str)
{
	int c = 0;
	int i = 0;

	while (*(str + c) != '\0')
	{
		c = c + 1;
	}
	while (i <= c)
	{
		if (*(str + i) != '\0')
		{
			putchar(*(str + i));
		}
		i = i + 2;
	}

	putchar('\n');
}
