#include "main.h"

/**
 * _strlen - shos the length of a string
 * @s: a pointer to an int
 *
 * Return: void always
 */

int _stlen(char *s)
{
	int leng;

	leng = 0;
	while (s[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}
