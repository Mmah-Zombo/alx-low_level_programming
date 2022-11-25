#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - counts the nmbr of elements in a list
 * @h: pointer to the list_t struct
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
