#include "lists.h"

/**
 * add_nodeint_end - add node at the end of linked list
 * @head: current head of linked list
 * @n: list element
 *
 * Return: null or pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added_node, *temporary_node;

	added_node = malloc(sizeof(listint_t));
	if (!added_node)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (*head == NULL)
	{
		*head = added_node;
		return (added_node);
	}

	temporary_node = *head;
	while (temporary_node->next)
	{
		temporary_node = temporary_node->next;
	}
	temporary_node->next = added_node;

	return (added_node);
}
