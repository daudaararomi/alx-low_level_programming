#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int m;
	m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than\n", n, m);
	}
	else if (m < 6)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}
