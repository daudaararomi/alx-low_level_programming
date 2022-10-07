#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A  function that concatenates two strings
 * @s1: string 1 to concatnate
 * @s2: 2 string to concatinate
 * @n: no of byte of s2
 *
 * Return: point to a newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned i, j, ii;
	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;
	str = (char*)malloc(sizeof(char) * (j + i + 1));
	if (str == NULL)
		return (NULL);
	ii = i;
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < j)
	{
		str[ii + i] = s2[i];
		i++;
	}
	str[ii + j] = '\0';
	return (str);
}
