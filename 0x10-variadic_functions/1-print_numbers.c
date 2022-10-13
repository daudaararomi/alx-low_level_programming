#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 *@separator: the string to be printed between numbers1
 *@n: the number of integers passed to the function
 *
 *Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	putchar('\n');
}
