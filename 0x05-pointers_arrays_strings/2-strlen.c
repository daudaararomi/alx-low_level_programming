#include "main.h"

/**
 * _strlen - to return the length of string length
 * @s : string variable
 * Return: nothing
 */

int _strlen(char *s)
{
	int c = 1;

	while(*(s + (c-1)) != '\0')
		c = c + 1;
	return(c);
}
