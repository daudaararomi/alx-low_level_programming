#include "main.h"

/**
 * reverse_array - reverse the content of an array of integer
 * @a: a pointer to array integer
 * @n: number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, n_, temp;

	n_ = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n_ - i];
		a[n_ - i] = temp;
	}
}
