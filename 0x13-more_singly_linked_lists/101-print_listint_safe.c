#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the listint_t
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int i;

	while (head)
	{
		i = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (i > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
