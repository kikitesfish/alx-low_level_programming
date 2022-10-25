#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: a pointer to the first node
 *
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	int i;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			node++;
		}
		else
		{
			free(*h);
			*h = NULL;
			node++;
			break;
		}
	}

	*h = NULL;

	return (node);
}
