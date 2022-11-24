#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints d nmbr of elements a list
 * @h: a list_h pionter
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}	
	return (count);
}
