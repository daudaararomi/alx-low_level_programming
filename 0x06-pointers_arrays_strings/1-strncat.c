#include "main.h"
#include <string.h>

/**
 * _strncat - concatenating two strings
 * @dest: a pointer destination string
 * @src: a pointer source string
 * @n: number of byte to be concatinated
 *
 * Return: concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}
	if (i < n)
		dest[j + i] = '\0';
	return (dest);
}
