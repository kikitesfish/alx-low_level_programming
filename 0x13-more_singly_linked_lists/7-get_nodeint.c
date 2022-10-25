#include "lists.h"

/**
 * get_nodeint_at_index - deletes the head node of a listint_t linked list
 * @head: a pointer to the head of the listint_t list
 * @index: the index of the node
 *
 * Return: NULL or the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
