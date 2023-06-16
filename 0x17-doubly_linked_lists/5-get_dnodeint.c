#include "lists.h"
/**
 * get_dnodeint_at_index - get list at index
 * @head: node to start with
 * @index: index tp get
 * Return: node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;

	while (i < index)
	{
	head = head->next;
	i++;
	}

    if (head == NULL)
    return NULL;

	return (head);
}
