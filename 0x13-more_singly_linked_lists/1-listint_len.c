#include "lists.h"

/**
 * print_listint - prints all elements of linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
