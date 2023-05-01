#include "lists.h"

/**
 * pop_listint - delete the head node of linked list
 * @head: pointer to the head of linked list
 *
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary = *head;
	int n;

	if (*head == NULL)
		return (0);

	n = temporary->n;
	*head = temporary->next;
	free(temporary);

	return (n);
}
