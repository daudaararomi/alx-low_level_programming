#include "main.h"

/**
 * _memset - function to fil a memory with constant bytes
 * @n: byte of memory area pointed by s
 * @b:constant byte
 * @s:a Pointer to memory
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i = i + 1;
	}

	return (s);
}
