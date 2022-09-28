#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s:a Pointer to a string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	printf("%c", *s);
	s++;
	if (*s == '\0')
	{
		printf("\n");
	}
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}
