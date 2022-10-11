#include <stdio.h>
#include <stdlib.h>
/**
 *a program that prints the name of the file it was compiled from.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);

}
