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
	listint_t *ptr2;

	if (ptr == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr)
		return (1);
	}

	while (counter < (index - 1))
	{
		if (ptr->next == NULL)
		{
			return (-1);
		}
		if (counter == (index - 2))
		{
			ptr2 = ptr;
		}
		ptr = ptr->next;
		counter++;
	}


	ptr2->next = ptr->next;
	free (ptr);
	return (1);

}
