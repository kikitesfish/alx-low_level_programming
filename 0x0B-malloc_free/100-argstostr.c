#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: a pointer to arguments
 *
 * Return: NULL or a
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int x, y, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			size++;
	}

	a = malloc(sizeof(char) * size + 1);

	if (a == NULL)
		return (NULL);

	i = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			a[i++] = av[x][y];

		a[i++] = '\n';
	}

	a[size] = '\0';

	return (a);
}
