#include "main.h"
#include <stdio.h>
/**
 * print_array  - print  array
 * @a : array variable
 * @n : integer varaible
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;
   	while (i <  n)
	{
		if (i == n-1)
		{
			printf ("%d", *(a + i));		}
		else
		{
		printf ( "%d, ", *(a + i));
		}
		i = i + 1;
       	}


	putchar('\n');
}
