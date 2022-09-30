#include "main.h"

/**
 * is_prime_number - a  function that returns 1 if the input integer is a prime
 *  number, otherwise return 0
 * root of a number.
 * @n: the number to test for prime number
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n % 2 != 0)
	{
		return (1);
	}
	if ( n % 2 == 0)
	{
		return (0);
	}
}

