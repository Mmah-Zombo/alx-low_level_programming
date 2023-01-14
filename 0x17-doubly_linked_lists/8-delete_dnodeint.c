#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    dlistint_t *current;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;
    if (index == 0) {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    for (i = 0; i < index; i++) {
        if (current->next == NULL)
            return (-1);
        current = current->next;
    }

    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;
    free(current);
    return (1);
}

