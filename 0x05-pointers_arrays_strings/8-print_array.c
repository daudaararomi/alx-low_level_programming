#include "main.h"
#include <stdio.h>
/**
 * print_array  - print  array
 * @a : array variable
 * @n : integer varaible
 * Return: nothing
 */
int i;
void print_array(in *a, int n)
{
   	while (i <= n)
	{
		printf ( "%d  ,", *(a + i));
		i = i + 1;
       	}


	putchar('\n');
}
