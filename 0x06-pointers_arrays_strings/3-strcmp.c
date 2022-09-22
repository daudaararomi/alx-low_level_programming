#include "main.h"

/**
 * _strncmp -compare two strings
 * @s1: a pointer first string
 * @s2: a pointer source string
 * *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while(*s1 != '\0' || *s2 != '\0')
	{
		if(*s1 == *s2)
		{
			i = -15;
		}
		else if(*s2 == *s1)
		{
			i = 15;
		}
		else
		{
			i = 0;
		}
		s1++;
		s2++;
	}
		return(i);
}
