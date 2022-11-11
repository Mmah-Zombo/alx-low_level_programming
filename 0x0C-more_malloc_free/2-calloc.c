#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function name
 * @nmemb: value one
 * @size: value two
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *try;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	try = malloc(nmemb * size);

	if (try == NULL)
	{
		return (NULL);
	}

	memset(try, 0, (nmemb * size));

	return (try);
}
