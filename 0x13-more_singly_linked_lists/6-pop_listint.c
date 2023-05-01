#include "lists.h"

/**
 * pop_listint - delete the head node of linked list
 * @head: pointer to the head of linked list
 *
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	int n;

	listint_t *temporary;

	if (!head)
		return (0);

	n = (*head)->n;
	temporary = *head;
	*head = temporary->next;

	free(temporary);

	return (n);
}
