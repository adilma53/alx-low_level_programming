
#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head of linked list
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *head_copy = *head;
	listint_t *next_node;

	while (head_copy != NULL)
	{
		next_node = head_copy->next_node;
		head_copy->next_node = previous_node;
		previous_node = head_copy;
		head_copy = next_node;
	}

	*head = previous_node;

	return (*head);
}
