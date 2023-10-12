#include "search_algos.h"
/**
 * linear_skip - binary search algorithm function
 * @list: list to search
 * @value: the value to search for
 *
 * Return: return first accurence of target
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *step;

	if (list == NULL)
		return (NULL);

	for (node = step = list; step->next != NULL && step->n < value;)
	{
		node = step;
		if (step->express != NULL)
		{
			step = step->express;
			printf("Value checked at index [%ld] = [%d]\n",
					step->index, step->n);
		}
		else
		{
			while (step->next != NULL)
				step = step->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, step->index);

	for (; node->index < step->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
