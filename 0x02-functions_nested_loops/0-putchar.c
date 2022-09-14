#include "main.h"

/**
 * main - Entry function
 *
 * Return: 0
 */
int main(void)
{
	char s[9];
	int i;

	s ="_putchar";
	for (i = 0; i <= 9; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
