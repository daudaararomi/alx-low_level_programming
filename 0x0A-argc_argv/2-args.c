#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
