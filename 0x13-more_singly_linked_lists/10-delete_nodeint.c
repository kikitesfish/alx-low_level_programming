#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linke
 * @head: a pointer to addres head of the listint_t
 * @index: the index of the node
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *cp = *head;
	unsigned int i;

	if (cp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (cp->next == NULL)
			return (-1);

		cp = cp->next;
	}

	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);
	return (1);
}
