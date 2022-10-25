#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node in the list
 *
 * Return: first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		prev = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = prev;
	}

	(*head)->next = behind;

	return (*head);
}
