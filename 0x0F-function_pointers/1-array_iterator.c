#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -executes a function given as a parameter on each element
 *@array: name to of the array ontaining the elements
 *@size: size of the array
 *@action: function pointer
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
