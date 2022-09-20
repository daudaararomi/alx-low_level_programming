#include "main.h"
#include <stdio.h>
/**
 * _puts( char *str) - print a string
 * @str : string variable
 * Return: nothing
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		putchar(*(str + c));
		c = c + 1;
	}

	putchar('\n');
}
