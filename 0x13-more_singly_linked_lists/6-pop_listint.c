#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n)
 * @head: pointer to the head of the list.
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int data;

	listint_t *hd = *head;
	listint_t *ptr = *head;

	if (*head == NULL)
	{
		return (0);
	}

	data = hd->n;

	hd = hd->next;
	*head = hd;
	free(ptr);

	return (data);
}
