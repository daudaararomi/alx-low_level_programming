#include "main.h"

/**
 * _strcat - concatenating two strings
 * @dest: a pointer destination string
 * @src: a pointer source string
 *
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int l_dest = _strlen(dest);
	int l_src = _srlen(src);
	int i = 0;

	while(*src == '\0')
	{
		*(dest + (l_dest + i)) = *src;
		i = i + 1;
		*src++;
	}
	*dest++ = '\0';
	return(dest)
}
