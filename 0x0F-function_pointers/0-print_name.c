#include "function_pointers.h"

/**
 * print_name - name of function
 * @name: pointer
 * @f: funcrion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
