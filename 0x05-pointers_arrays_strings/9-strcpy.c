#include "main.h"
#include <stdio.h>
/**
 * _srtcpy  - copy stringy
 * @dest :destination char pointer
 * @src : source char pointer
 * Return: nothing
 */
int i = 0;

char *_strcpy(char *dest, char *src)
{
	while (*(src + i) == '\0')
	{
		*(dest + i) = *(src + i);
		i = i + 1;
	return (dest);
	}
}
