#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (head == NULL)
	{
		return;
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}

	head = NULL;
}
