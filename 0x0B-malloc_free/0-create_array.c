#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -function that creates an array of chars, and initialize it 
 * @size: size of the array
 * @c: array variable
 *
 * Return : char array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;
       	str = malloc(sizeof(char)*size);
	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = c;
		i = i + 1;
	}
	return (str);
}

