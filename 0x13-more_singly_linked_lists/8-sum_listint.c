#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 *               (n) of a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *ptr = head;

	if (head == NULL)
	{
		return (0);
	}

	while (ptr->next != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	sum += ptr->n;

	return (sum);
}
