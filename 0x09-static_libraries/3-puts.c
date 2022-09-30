#include "main.h"

/**
 * _puts - prints out a string
 * @str: input in a string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
