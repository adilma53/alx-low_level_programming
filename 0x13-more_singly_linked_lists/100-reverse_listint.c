
#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head of linked list
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *head_copy = NULL;
	listint_t *next = NULL;
	listint_t *previous_node = NULL;

	if ((*head)->next == NULL || *head == NULL)
		return (*head);

	head_copy = *head;
	while (!head_copy)
	{
		next = head_copy->next;
		head_copy->next = previous_node;
		previous_node = head_copy;
		head_copy = next;
	}

	*head = previous_node;

	return (*head);
}
