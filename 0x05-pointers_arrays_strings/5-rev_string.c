#include "main.h"
#include <stdio.h>
/**
 * rev_string  - reverse a string e
 * @s : string variable
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, len, len1;
	char temp;

	len = _strlen(*s);
	len1 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len1--] = temp;
	}
}
