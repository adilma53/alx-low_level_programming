#include "lists.h"

/**
 * free_listint_safe - free linked list
 * @h: Pointer to the head of the linked list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t counter = 0;

	while (current != NULL)
	{
		counter++;
		next = current->next;
		free(current);

		if (next >= current)
		{
			*h = NULL;
			break;
		}
		current = next;
	}

	return (counter);
}