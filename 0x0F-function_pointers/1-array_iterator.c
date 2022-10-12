#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -executes a function given as a parameter on each element
 *@name: name to print
 *@f: pointer to the function  that will print the name
 *
 *Return:Noting to print
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;
	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
