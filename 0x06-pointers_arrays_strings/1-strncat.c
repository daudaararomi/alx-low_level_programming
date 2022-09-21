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
	int l_dest = strlen(dest);
	int i = 0;

	while(i <= (n - 1))
	{
		*(dest + (l_dest + i)) = *src;
		i = i + 1;
		src++;
	}
	return(dest);
}
