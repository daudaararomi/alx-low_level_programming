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
	int c1, c2, c3, c4;

	for (c1 = 0; c1 <= 9; ++c1)
	{
		for (c2 = 0; c2 <= 9; ++c2)
		{
			for (c3 = 1; c3 <= 9; ++c3)
			{
				for (c4 = c3 - 1; c4 <= 9; ++c4)
				{
					putchar((c1 % 10) + '0');
					putchar((c2 % 10) + '0');
				      	putchar(' ');
					putchar((c4 % 10) + '0');
					putchar((c3 % 10) + '0');
					if (c1 <= 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);
}
