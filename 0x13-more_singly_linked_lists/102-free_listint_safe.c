#include "lists.h"

/**
 * free_listint_safe - free linked list
 * @h: Pointer to the head of the linked list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	current = *h;
	*h = NULL;

	while (current)
	{
		next = current->next;
		free(current);
		count++;

		if (next >= current)
			break;

		current = next;
	}

	return (count);
}
