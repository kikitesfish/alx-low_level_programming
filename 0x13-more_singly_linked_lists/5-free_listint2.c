#include "lists.h"

/**
 * free_listint2 - frees a link list
 * @head: a pointer to the listint list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
