#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index 'index'
 *                           of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: position of the node, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
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
		free(ptr);
		return (1);
	}

	while (counter < (index - 1))
	{
		if (ptr->next == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
		counter++;
	}


	ptr2 = ptr->next;
	ptr->next = ptr2->next;
	free(ptr2);
	return (1);

}
