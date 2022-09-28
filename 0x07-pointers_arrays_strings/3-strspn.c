#include "main.h"

/**
 * _strspn -function that gets the length of a prefix substring
 * @s:srtring to count its the byte of the number of its segement
 * @accept: hold characters whose byte to count
 *
 * Return: the number the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int ii = 0;

	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			if (*s == *accept)
				i = i +  sizeof(*accept);
			s = s + 1;
			ii = ii + 1;
		}
		s = s - ii;
		accept = accept + 1;
	}
	return (i);
}
