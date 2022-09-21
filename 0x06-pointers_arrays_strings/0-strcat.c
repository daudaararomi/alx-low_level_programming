#include "main.h"
#include <string.h>

/**
 * _strcat - concatenating two strings
 * @dest: a pointer destination string
 * @src: a pointer source string
 *
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int l_dest = strlen(dest);
	int i = 0;

	while(*src != '\0')
	{
		*(dest + (l_dest + i)) = *src;
		i = i + 1;
		src++;
	}
	return(dest);
}
