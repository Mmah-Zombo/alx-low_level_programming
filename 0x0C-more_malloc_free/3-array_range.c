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
	int a , i;

	a = 0;

	if (min > max)
	{
		return (NULL);
	}

	int *arr = malloc(((max - min) + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		arr[a] = i;
		a++;
	}
	return (arr);
}
