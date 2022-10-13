#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -function that returns the sum of all its parameters.
@n: the  first argument
*
*Return: sum of all the parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list p;

	va_start(p, n);
	if (n != 0)
	{
		while (i < n)
		{
			sum = sum + va_arg(p, int);
			i++;
		}
		va_end(p);
	}
	else
	{
		return (0);
	}
	return (sum);
}
