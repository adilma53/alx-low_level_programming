
#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head of linked list
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL, *next_node;

	for (; *head != NULL;)
	{
		next_node = (*head)->next_node;
		(*head)->next_node = previous_node;
		previous_node = *head;
		*head = next_node;
	}

	*head = previous_node;

	return (*head);
}
