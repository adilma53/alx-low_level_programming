#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in specified index
 * @head: pointer to head of list
 * @idx: index
 * @n: node elements
 *
 * Return: new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *added_node;
	listint_t *temporary = *head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	added_node = malloc(sizeof(listint_t));
	if (!added_node)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (idx == 0)
	{
		added_node->next = *head;
		*head = added_node;
		return (added_node);
	}

	for (; temporary && i < idx - 1;)
	{
		temporary = temporary->next;
		i++;

		if (!temporary)
		{
			free(added_node);
			return (NULL);
		}
	}

	added_node->next = temporary->next;
	temporary->next = added_node;

	return (added_node);
}
