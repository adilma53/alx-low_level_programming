
#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head of linked list
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
