#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: a pointer destination string
 * @src: a pointer source string
 * @n: number of byte to be concatinated
 *
 * Return: concatinated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src != '\0')
	{
		*(dest + i) = *src;
		i = i + 1;
		src++;
	}
	*dest = '\0';
	return (dest);
}
