#include "function_pointers.h"

/**
 * array_iterator - function name
 * @array: array name
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if (array && action)
	{
		for (u = 0; u < size; u++)
		{
			action(array[u]);
		}
	}

}
