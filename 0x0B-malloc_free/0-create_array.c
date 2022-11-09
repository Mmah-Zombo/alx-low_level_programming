#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: specific character
 *
 * Return: depends on the output
 */
char *create_array(unsigned int size, char c)
{
	char *arrc;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arrc = malloc(sizeof(c) * size);

	if (arrc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arrc[i] = c;
	}

	return (arrc);
}
