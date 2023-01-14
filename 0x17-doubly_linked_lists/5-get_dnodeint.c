#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *current;

    if (head == NULL)
        return (NULL);

    current = head;
    for (i = 0; i < index; i++)
    {
        if (current->next == NULL)
            return (NULL);
        current = current->next;
    }
    return (current);
}
