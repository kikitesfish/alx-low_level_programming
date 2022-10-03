#include "main.h"
#include <stdlib.h>

/**
 * word_string - locates the index working
 * @str: string
 *
 * Return: a
 */

int word_string(char *str)
{
	int i = 0, a = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		a++;
		i++;
	}

	return (a);
}

/**
 * count_string - count the number
 * @str: string
 *
 * Return: b
 */

int count_string(char *str)
{
	int i = 0, b = 0, a = 0;

	for (i = 0; *(str + i); i++)
		a++;

	for (i = 0; i < a; i++)
	{
		if (*(str + i) != ' ')
		{
			b++;
			i += word_string(str + i);
		}
	}

	return (b);
}

/**
 * strtow - a function that splits a string into words
 * @str: the string to be split
 *
 * Return: NULL or c
 */

char **strtow(char *str)
{
	char **c;
	int i = 0, b, x, y, z;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	b = count_string(str);
	if (b == 0)
		return (NULL);

	c = malloc(sizeof(char *) * (b + 1));
	if (c == NULL)
		return (NULL);

	for (x = 0; x < b; x++)
	{
		while (str[i] == ' ')
			i++;

		y = word_string(str + i);

		c[x] = malloc(sizeof(char) * (y + 1));

		if (c[x] == NULL)
		{
			for (; x >= 0; x--)
				free(c[x]);

			free(c);
			return (NULL);
		}

		for (z = 0; z < y; z++)
			c[x][z] = str[i++];

		c[x][z] = '\0';
	}
	c[x] = NULL;

	return (c);
}
