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
	char leet[] = "ol_ea__t";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; leet[y] != '\0'; y++)
		{
			if (str[x] == leet[y] || str[x] == (leet[y] - 32))
			{
				str[x] = y + '0';
			}
		}
	}
	return (str);
}
