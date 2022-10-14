#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, char));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list st)
{
	char *str = va_arg(st, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list fl)
{
	printf("%f", va_arg(fl, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list pa;
	char *separator = ",";

	va_start(pa, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(pa);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(pa);
	printf("\n");
}
