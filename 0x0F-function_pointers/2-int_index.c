#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.1
 *@array: array containing the elements
 *@size: size of the array
 *@cmp: a pointer to the function to be used to compare values
 *
 *Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
		exit(0);
	}
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
				exit(0);
			}
			i++;
		}
	}
	return (-1);
}
