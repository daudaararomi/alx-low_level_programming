#include "main.h"
#include <stdio.h>
/**
 * puts2  - print every other characters
 * @s : string variable
 * Return: nothing
 */

void puts(char *str)
{
	int c = 0;
	int i = 0;

	while (*(s + c) != '\0')
	{
		c = c + 1;
	}
	while (i <= c)
	{
		if (*(s + i) != '\0')
		{
			putchar(*(s + i));
		}
		i = i + 2;
	}

	putchar('\n');
}
