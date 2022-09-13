#include <stdio.h>
#include <main.h>

/**
 *
 * main - check the code.
 *
 *Return: Always 0
 *
 *program to print out _putchar
 */
int main(void)
{
	char name[9];
	name = "_putchar";
	int n;
	for ( n = 0; n < 9; ++n)
		putchar(name[n]);
	putchar('\n'); /* to move to next line */
	return (0);
}
