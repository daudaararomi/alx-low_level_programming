#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; ++c)
	{
		putchar((c % 10) + '0');
	}

	putchar('\n');

	return (0);
}
