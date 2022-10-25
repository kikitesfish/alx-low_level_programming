#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the head of list_t list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
