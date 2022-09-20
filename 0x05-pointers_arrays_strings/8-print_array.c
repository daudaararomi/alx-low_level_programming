#include "main.h"
#include <stdio.h>
/**
 * print_array  - print  array
 * @a : array variable
 * @n : integer varaible
 * Return: nothing
 */

void print_array(int*a, int n)
{
	int i;
   	while (i <= n)
	{
		printf ( "%d  ,", *(a + i));
		i = i + 1;
       	}


	putchar('\n');
}
