#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: a pointer to the first node of the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return elements;

}
