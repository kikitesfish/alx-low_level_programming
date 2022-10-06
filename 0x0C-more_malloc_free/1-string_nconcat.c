#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 *
 * Return : NULL or char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		x++;

	a = malloc(sizeof(char) * (x + 1));

	if (a == NULL)
		return (NULL);

	x = 0;

	for (i = 0; s1[i]; i++)
		a[x++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		a[x++] = s2 [i];

	a[x] = '\0';

	return (a);
}
