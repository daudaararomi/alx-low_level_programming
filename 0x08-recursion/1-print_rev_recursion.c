#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s:a Pointer to a string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
