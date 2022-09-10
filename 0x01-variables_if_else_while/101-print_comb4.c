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
	int c1, c2, c3;

	for (c1 = 0; c1 <= 7; ++c1)
	{
		for (c2 = c1 + 1; c2 <= 8; ++c2)
		{
			for (c3 = c2 + 1; c3 <= 9; c3++)
			{
				putchar((c1 % 10) + '0');
				putchar((c2 % 10) + '0');
				putchar((c3 % 10) + '0');
				if (c3 <= 9 && c2 <= 8 && c1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
