#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid -function that returns a pointer to a 2 dimensional arrayofintegers
 * @width: number of row
 * @height: number of column
 * Return: pointer to concantenated string or NULL if error
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
