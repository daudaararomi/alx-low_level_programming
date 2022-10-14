#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints numbers, followed by a new line
 *@separator: the string to be printed between numbers1
 *@n: the number of integers passed to the function
 *
 *Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *str;

	va_start(ap, n);
	while (i < n)
	{
		str = va_arg(ap, char *);
		if(str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	putchar('\n');
}
