#include "lists.h"
/**
 * dlistint_len - get list length
 * @h: node to start with
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}

	return (i);
}
