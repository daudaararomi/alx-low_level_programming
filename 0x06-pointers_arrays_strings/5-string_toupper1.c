#include "main.h"

/**
 *string_toupper - change lower case to upper case
 * @str: string to uppercase
 *
 * Return: uppercase string return
 */

char *string_toupper(char *str)
{
	while (*str != '\0' && *str != '\n')
	{
		if ((*str >= 'a') && (*str <= 'z'))
			*str = *str - 32;
		str++;
	}
	return (str);
}
