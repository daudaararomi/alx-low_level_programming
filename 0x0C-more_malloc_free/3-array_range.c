#include "main.h"
#include <stdlib.h>
/**
 *array_range:A function that creates an array of integers
 *@min: minimum input
 *@max: maxmum input
 *
 *return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int m_n;

	m_n = max -  min + 1;
	if (min > max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	while (i < m_n)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
