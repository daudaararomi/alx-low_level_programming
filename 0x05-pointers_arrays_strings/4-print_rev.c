#include "main.h"
#include <stdio.h>
/**
 * print_rev  - print a string in reverse follow by a new line
 * @s : string variable
 * Return: nothing
 */

void print_rev(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		putchar(*(s + c));
		c = c + 1;
	}
	while (c >= 0)
	{
		putchar(*(s + c));
		c = c - 1;
	}

	putchar('\n');
}
