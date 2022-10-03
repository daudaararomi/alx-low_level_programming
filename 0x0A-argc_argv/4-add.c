#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int a = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && atoi(argv[i]) <= 9)
		{
			a = a + atoi(argv[i]);
		}
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", a);
	return (0);
}
