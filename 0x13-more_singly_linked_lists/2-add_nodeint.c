#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds node at the beginning of a list
 * @head: a pointer to the address of head
 * @n: integer in the new node
 *
 * Return: the address of the new node/NULL if it failed
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

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
