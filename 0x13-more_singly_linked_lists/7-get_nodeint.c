#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node
 *                        of a listint_t linked list
 * @head: head of the linked list
 * @index: the index of the node starting at zero
 *
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *ptr = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (count < index)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
		count++;
	}

	return (ptr);
}
