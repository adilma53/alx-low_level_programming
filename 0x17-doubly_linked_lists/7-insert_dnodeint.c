#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at specific index
 * @h: head
 * @idx: index
 * @n: node data
 * Return: node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *head_copy1 = *h;
	dlistint_t *head_copy2 = *h;
	dlistint_t *left_node;
	dlistint_t *right_node;

	new_node->n = n;
	while (head_copy1)
	{
		head_copy1 = head_copy1->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	while (head_copy2)
	{
		head_copy2 = head_copy2->next;
		j++;
		if (j == idx - 1)
		{
			left_node = head_copy2;
			/* step into target to get right node */
			head_copy2 = head_copy2->next;
			right_node = head_copy2->next;
			/*connect left node to the new node*/
			(left_node)->next = new_node;
			/* connect new node to left node*/
			(new_node)->prev = left_node;
			/* connect new node to right node*/
			(new_node)->next = right_node;
			/* coneect right node to new node*/
			(right_node)->prev = new_node;

			break;
		}
	}
	return (new_node);
}

int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}