#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *behind;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	behind = NULL;

	while ((*head)->next != NULL)
	{
		before = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = before;
	}

	(*head)->next = behind;

	return (*head);
}
