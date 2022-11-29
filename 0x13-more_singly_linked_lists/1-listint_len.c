#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - calculate the number of elements in a list
 * @h: pointer to the head of the list.
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h !=NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
