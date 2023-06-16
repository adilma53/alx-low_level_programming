#include "lists.h"
/**
 * free_dlistint - free linked list
 * @head: head
 * Return: nothing
*/




void free_dlistint(dlistint_t *head)
{

dlistint_t *head_head;

	while (head)
	{
		head_copy = head;
		head = head->next;

		free(head_copy)


	}

}
