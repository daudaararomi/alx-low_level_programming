#include "main.h"
#include <stdio.h>
/**
 * _strcpy  - copy stringy
 * @dest :destination char pointer
 * @src : source char pointer
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
