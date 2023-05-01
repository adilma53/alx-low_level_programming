#include "lists.h"

/**
 * free_listint2 - free linked list set head to last ->next (NULL)
 *
 * @head: pointer to head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (!head)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	free_listint2(&head);
	printf("%p\n", (void *)head);
	return (0);
}