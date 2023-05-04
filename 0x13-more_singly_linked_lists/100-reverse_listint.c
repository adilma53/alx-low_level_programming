
#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head of linked list
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL, *next;

	for (; *head != NULL;)
	{
		next = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next;
	}

	*head = previous_node;

	return (*head);
}
