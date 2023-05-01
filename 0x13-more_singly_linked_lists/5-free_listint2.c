#include "lists.h"

/**
 * free_listint2 - free linked list set head to last ->next (NULL)
 *
 * @head: pointer to head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (!head)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
	*head = NULL;
}
