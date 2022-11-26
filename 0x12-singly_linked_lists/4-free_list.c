#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: input header pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
