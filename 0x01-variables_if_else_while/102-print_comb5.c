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

	for (c1 = 0; c1 <= 9; ++c1)
	{
		for (c2 = 0; c2 <= 9; ++c2)
		{
			for (c3 = 0; c3 <= 9; c3++)
			{
				putchar((c1 % 10) + '0');
				putchar((c2 % 10) + '0');
				putchar(',');
				putchar(' ');
				putchar((c2 % 10) + '0');
				putchar((c3 % 10) + '0');
				if (c3 <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
