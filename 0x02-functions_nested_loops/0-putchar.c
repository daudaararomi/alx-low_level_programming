#include "main.h"

/**
 * main - Entry function
 *
 * Return: 0
 */
int main(void)
{
	char s[9] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
