#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (head == NULL)

		if (index == 0)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
			return (1);
		}

	prev = *head;
	current = (*head)->next;

	for (i = 1; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}