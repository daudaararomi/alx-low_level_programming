#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";
	int j = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
	}
	return (s);
}
