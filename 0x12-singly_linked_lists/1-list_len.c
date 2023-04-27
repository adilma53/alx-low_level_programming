#include "lists.h"

/**
 * list_len - length of linked list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{

		counter++;
		h = h->next;
	}
	return (counter);
}
