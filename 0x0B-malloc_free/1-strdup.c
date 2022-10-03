#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to  be copied
 *
 * Return: NULL or 0
 */

char *_strdup(char *str)
{
	char *a;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	a = malloc(sizeof(char) * (size + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		a[i] = str[i];

	a[size] = '\0';

	return (a);
}
