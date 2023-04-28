#include "lists.h"

/**
 * add_node_end - add node to end of linked list
 *
 * @head: head of original linked list
 * @str: string to add to the new node
 *
 * Return: the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *added_node;
    list_t *temporary_node;

    if (!head || !str)
        return (NULL);

    added_node = malloc(sizeof(list_t));
    if (!added_node)
        return (NULL);

    added_node->str = strdup(str);
    added_node->next = NULL;

    if (*head == NULL)
    {
        *head = added_node;
        return (added_node);
    }

    if (!(added_node->str))
    {
        free(added_node);
        return (NULL);
    }

    temporary_node = *head;
    while (temporary_node->next)
        temporary_node = temporary_node->next;

    temporary_node->next = added_node;

    return (added_node);
}
