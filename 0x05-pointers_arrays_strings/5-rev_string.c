#include "main.h"
#include <stdio.h>
/**
 * rev_string  - reverse a string e
 * @s : string variable
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = _strlen(s);
  	char *str;
	int i;

	for ( i = len ; i >= 0; i--)
	{
		*(str + (len-i)) = *(s + i);
       	}

	*s = *str;
	putchar('\n');
}
