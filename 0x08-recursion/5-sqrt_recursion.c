#include "main.h"

/**
 * _sqrt_found - a function that returns the natural square
 * root of a number.
 * @n: the number whose square root to known
 * @mid: Guess
 *
 * Return: integer result
 */

int _sqrt_found(int n, int mid)
{
	if (mid * mid < n)
	{
		return (_sqrt_found(n, mid + 1));
	}
	if (mid * mid > n)
	{
		return (-1);
	}
	return (mid);
}

/**
 *_ sqrt_recursion - a function that returns the natural square
 * root of a number.
 * @n: the number whose square root to known
 *
 * Return: integer result
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_found(n, 1));
}
