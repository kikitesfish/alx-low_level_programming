#include "main.h"

/**
 * print_rev - reverse string printer
 * @s: a pointer to a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
