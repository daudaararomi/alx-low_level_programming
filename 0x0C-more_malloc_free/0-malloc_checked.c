#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -a function that allocates memory using malloc.
 *@b: unsigned integer size of memory
 *
 * Return  a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
