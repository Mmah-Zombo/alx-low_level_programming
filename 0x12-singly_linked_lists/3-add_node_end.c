#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - funtion name says it all
 * @head: pointer to the pointer head
 * @str: a string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn = malloc(sizeof(list_t));
	list_t *hptr = *head;

	if (!newn)
	{
		return (NULL);
	}

	newn->str = strdup(str);
	newn->len = strlen(str);
	newn->next = NULL;


	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (hptr->next != NULL)
	{
		hptr = hptr->next;
	}
	hptr->next = newn;

	return (newn);
}
