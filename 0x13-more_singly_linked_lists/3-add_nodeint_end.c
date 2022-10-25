#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @head: the first element in the list
 * @n: the intiger to the new node
 *
 * Return: NULL or to he new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;

	return (new);
}
