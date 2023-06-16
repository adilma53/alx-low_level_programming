#include "lists.h"
/**
 * get_dnodeint_at_index - get list at index
 * @head: node to start with
 * @index: index tp get
 * Return: node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;
	}

	return (NULL);
}
