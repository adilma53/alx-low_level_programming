#include "lists.h"

/**
 * sum_listint - sum of all n elements in all nodes
 * @head: pointer to the head of linkedlist
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}

	return (s);
}
