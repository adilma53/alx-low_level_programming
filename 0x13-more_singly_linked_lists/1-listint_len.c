#include "lists.h"

/**
 * listint_len - list length
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
