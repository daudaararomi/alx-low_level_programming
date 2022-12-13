#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

       while  dest[i] != '\0')
	{
		++i;
	}

	while (*src != '\0')
	{
		(dest[i + n] = *src++);
		++n;
	}

	return (dest);
}
