#include "lists.h"

/**
 * add_nodeint - add node at the beginning of list
 * @head: current head of linked list
 * @n: list element
 *
 * Return: null or pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));
	if (!added_node)
		return (NULL);

	added_node->n = n;
	added_node->next = *head;
	*head = added_node;

	return (added_node);
}
