#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element in linked list
 *
 * Return: 0 or the data inside the elements
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);

	*head = tmp;

	return (num);
}
