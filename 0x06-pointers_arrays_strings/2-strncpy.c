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
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
