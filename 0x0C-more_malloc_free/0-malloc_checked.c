#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function name
 * @b: variable
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	else
	{
		return (malloc(b));
	}
}
