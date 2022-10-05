#include "main.h"
#include <stdlib.h>
/**
 *str_concat -a function that concatenates two strings1
 * @s1: string 1 to concatenate
 * @s2: string 2 to concantenate
 * Return: pointer to concantenated string or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, is1, js2;
	char *s;

	i = 0;
	j = 0;
	if (s1 == NULL)
		i = 0;
      	else
		while (s1[i])
			i++;
	if (s2 == NULL)
		j = 0;
	else
		while (s2[j])
			j++;
	s = malloc((i + j + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (is1 = 0; is1 < i; is1++
		     s[is1] = s1[is1];
	for (js2 = 0; js2 < j; js2++)
		s[i + js2] = s2[js2];
	     s[i + j] = '\0';
	     return (s);
}
