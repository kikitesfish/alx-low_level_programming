#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: bytes size
 *
 * Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL);

	a = x;

	for (i = 0; i < (size * nmemb); i++)
		a[i] = '\0';

	return (x);
}
