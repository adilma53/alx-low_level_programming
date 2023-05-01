#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in specific index
 * @head: pointer to head of list
 * @idx: index
 * @n: node elements
 *
 * Return: new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *before_node;
    listint_t *added_node;
    unsigned int i;

    if (idx == 0)
        return (add_nodeint(head, n));

    if (!head)
        return (NULL);

    before_node = *head;
    for (i = 0; i < idx - 1 && before_node; i++)
        before_node = before_node->next;

    if (!before_node)
        return (NULL);

    added_node = malloc(sizeof(listint_t));
    if (!added_node)
        return (NULL);

    added_node->n = n;
    added_node->next = before_node->next;
    before_node->next = added_node;
    return (added_node);
}
