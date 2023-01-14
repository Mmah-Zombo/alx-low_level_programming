#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - deletes a double linked list
 * @head: pointer to the head of a list
 */
void free_dlistint(dlistint_t *head)
{
	if (*head == NULL)
	{
		free(*head);
	}
	else
	{
		while (*head)
		{
			free(*head->prev);
			*head = *head->next;
			free(*head->prev);
		}
	free(*head);
	}
}
