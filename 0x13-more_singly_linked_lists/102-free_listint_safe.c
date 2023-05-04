#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *next;
	size_t COUNTER = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current_node = *h;
	*h = NULL;

	for (; current_node != NULL;)
	{
		next = current_node->next;
		free(current_node);
		COUNTER++;

		if (next >= current_node)
			break;

		current_node = next;
	}

	return (COUNTER);
}
