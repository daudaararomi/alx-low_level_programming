#include "main.h"

/**
 * _memcpy - function that copy memory area
 * @n:number of byte of memory area pointed by s
 * @src:source memory area
 * @dest:destination memory area
 *
 * Return: a pointer to the destination  memory area
 */

char *_memset(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
