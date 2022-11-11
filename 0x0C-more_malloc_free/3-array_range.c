#include "main.h"
#include <stdlib.h>

/**
 * array_range - function name
 * @min: value one
 * @max: value two
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}

	char arr[] = malloc(((max - min) + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	
	return (arr);
}
