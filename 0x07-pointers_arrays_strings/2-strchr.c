#include "main.h"

/**
 * _strchr - function that locates a chracter in a string.
 * @s:srtring where to locate character
 * @c:character to locate
 *
 * Return: a pointer to the first occurence of the letter
 */

char *_strchr(char *s, char c)
{
	while (s != NULL)
	{
		if (*s == c)
		{
			break;
		}
		s = s + 1;
	}
	s = NULL;
	return (s);
}
