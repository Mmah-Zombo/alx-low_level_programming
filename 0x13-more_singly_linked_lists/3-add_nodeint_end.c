#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the old node's head
 * @n: inter value of the new node
 *
 * Return: address of the new element/NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *hd;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode = NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		hd = *head;
		while (hd->next != NULL)
		{
			hd = hd->next;
		}

		hd->next = newNode;
	}

	return (newNode);
}
