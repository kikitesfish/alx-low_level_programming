#include "main.h"

/**
 * _strcmp - Compare pointers
 * @s1: A pointer to be compared
 * @s2: a pointer to be compared
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	j = s1[i] -s2[i];
	return (j);
}
