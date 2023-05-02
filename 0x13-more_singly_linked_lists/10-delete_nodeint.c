#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to head of linked list
 * @index: index to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *current_node;
    listint_t *previous_node;

    if (!*head)
        return (-1);

    current_node = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(current_node);
        return (1);
    }

    while (i < index && current_node)
    {
        previous_node = current_node;
        current_node = current_node->next;
        i++;

        if (!current_node)
            return (-1);
    }

    previous_node->next = current_node->next;
    free(current_node);

    return (1);
}
