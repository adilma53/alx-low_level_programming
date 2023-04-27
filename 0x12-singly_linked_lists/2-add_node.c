#include "lists.h"

/**
 * add_node - add node to beginning of linked list
 *
 * @head: head of original linked list
 * @str: string to add to the new nodes
 *
 * Return: the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;
	list_t *temporary_node;
	if (!head || !str)
		return (NULL);

	added_node = malloc(sizeof(list_t));
	if (!added_node)
		return (NULL);

	added_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (!(added_node->str))
	{
		free(added_node);
		return (NULL);
	}

	temporary_node = *head;
	while (temporary_node->next)
		temporary_node = temporary_node->next;

	temporary_node->next = new_node;

	return (added_node);
}
