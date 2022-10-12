#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 *@name: name to print
 *@f: pointer to the function  that will print the name
 *
 *Return:Noting to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
