#include "lists.h"

/**
 * free_listint - free linked list (step in free step in free)
 * @head: pointer to head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}
}
