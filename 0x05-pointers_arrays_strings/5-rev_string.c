#include "main.h"
#include <stdio.h>
/**
 * rev_string  - reverse a string e
 * @s : string variable
 * Return: nothing
 */

void rev_string(char *s)
{
	int c = 0;

	char str;
	while (*(s + c) != '\0')
	{
		c = c + 1;
	}
	for (int i = 0 ; c >= 0; i++)
	{
		if (*(s + c) != '\0')
		{
			str[i] = *(s + c);
		}
		c = c - 1;
	}

	putchar('\n');
}
