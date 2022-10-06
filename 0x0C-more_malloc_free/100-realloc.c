#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: NULL or pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *x;
	char *a, *b;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		x = malloc(new_size);

		if (a == NULL)
			return (NULL);

			return (a);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	a = ptr;
	x = malloc(sizeof(*a) * new_size);

	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}

	b = a;

	for (i = 0; i < old_size && i < a; i++)
		b[i] = *a++;

	free(ptr);
	return (x);
}
