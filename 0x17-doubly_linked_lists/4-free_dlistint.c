#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - deletes a double linked list
 * @head: pointer to the head of a list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head->prev);
		head = head->next;
		free(head->prev);
	}
}
