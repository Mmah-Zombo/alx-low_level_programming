#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *ptr = *head;
	listint_t *ptr2 = *head;

	if (head == NULL)
	{
		return (-1);
	}

	while (counter < index)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		if (counter == (index - 1))
		{
			ptr2 = ptr;
		}
		ptr = ptr->next;
		counter++;
	}

	if (ptr->next != NULL)
	{
		ptr2->next = ptr->next;
		free (ptr);
	}

	if (ptr->next == NULL)
	{
		ptr2->next == NULL;
		free (ptr);
	}

	return (1);
}
