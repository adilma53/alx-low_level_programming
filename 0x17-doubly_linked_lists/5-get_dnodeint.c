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

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
