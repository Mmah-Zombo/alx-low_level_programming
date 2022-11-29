#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}

	newNode->next = *head;

	*head = newNode;

	return (*head);
}
