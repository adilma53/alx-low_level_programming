#include "lists.h"

/**
 * pop_listint - delete the head node of linked list
 * @head: pointer to the head of linked list
 *
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temorary;
	int n;

	if (*head == NULL)
		return 0;

	temorary = *head;
	n = temorary->n;
	*head = temorary->next;
	free(temorary);

	return (n);
}
