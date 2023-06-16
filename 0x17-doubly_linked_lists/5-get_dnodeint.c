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
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
