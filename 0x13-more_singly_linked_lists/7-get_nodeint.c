#include "lists.h"

/**
 * get_nodeint_at_index - access the ith node of linked list
 * @head: pointer to the head of linked list
 * @index: index to access
 *
 * Return: index needed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	while (head && k < index)
	{
		head = head->next;
		k++;
	}

	return (head);
}
