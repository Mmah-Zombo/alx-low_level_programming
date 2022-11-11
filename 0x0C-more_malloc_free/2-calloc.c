#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function name
 * @nmemb: value one
 * @size: value two
 *
 * Retrun: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *try;

	try = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (try == NULL)
	{
		return (NULL);
	}

	memset(try, 0, (nmemb * size));

	return (try);
}
