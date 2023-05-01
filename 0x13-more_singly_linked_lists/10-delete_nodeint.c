#include "lists.h"

/**
 * delete_nodeint_at_index - delete list node at specific index
 * @head: pointer to athe head of list
 * @index: index to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary_node;
	listint_t *node_before;
	unsigned int i;

	if (!head)
		return (-1);

	if (index == 0)
	{
		temporary_node = *head;
		*head = (*head)->next;
		free(temporary_node);
		return (1);
	}

	node_before = *head;
	for (i = 0; i < index - 1 && node_before; i++)
		node_before = node_before->next;

	if (node_before == NULL)
		return (-1);

	temporary_node = node_before->next;
	node_before->next = temporary_node->next;
	free(temporary_node);

	return (1);
}
