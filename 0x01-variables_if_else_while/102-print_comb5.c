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
	int c1, c2;

	for (c1 = 0; c1 <= 9; ++c1)
	{
		for (c2 = 0; c2 <= c1 + 1; ++c2)
		{
			putchar((c1 % 10) + '0');
			putchar((c2 % 10) + '0');
			if (c2 <= 9 && c1 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
