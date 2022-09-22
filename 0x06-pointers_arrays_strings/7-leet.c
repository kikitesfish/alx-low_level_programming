#include "main.h"

/**
 * leet - encode
 * @s: input string
 * Return: encoded string
 */

char *leet(char *str)
{
	int x;
	int y;
	char l[] = "ol_ea__t";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; l[y] != '\0'; y++)
		{
			if (str[x] == l[y] || str[x] == (l[y] - 32))
			{
				str[x] = y + '0';
			}
		}
	}
	return (str);
}
