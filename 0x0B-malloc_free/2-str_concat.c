#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: concates of s1
 * @s2: concates of s2
 *
 * Return: NULL or 0
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		size2++;

	a = malloc(sizeof(char) * size2);

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		a[size1++] = s1[i];

	for (i = 0; s2[i]; i++)
		a[size1++] = s2[i];

	return (a);
}
