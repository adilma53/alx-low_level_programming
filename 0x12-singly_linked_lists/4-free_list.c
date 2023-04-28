#include "lists.h"

/**
 * free_list - free linked list
 * @head: pointer to the head of the linked list
 *
 * Return: ....
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head;
		head = head->next;

		free(temporary->str);
		free(temporary);
	}
}

