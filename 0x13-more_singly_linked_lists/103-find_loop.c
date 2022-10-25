#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: addres of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *last = head;
	listint_t *first = head;

	if (!head)
		return (NULL);

	while (last && first && first->next)
	{
		first = first->next->next;
		last = last->next;
		if (first == last)
		{
			last = head;
			while (last != first)
			{
				last = last->next;
				first = first->next;
			}
			return (first);
		}
	}

	return (NULL);
}
