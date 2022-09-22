#include "main.h"

/**
 * rot13 - string using rot13
 * @str: string to be encoded
 *
 * Return: to the string
 */
char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{

		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet [i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
