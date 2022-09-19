#include "main.h"

/**
 * puts_half - prints half of an input string
 * @str: a pointer to the string value
 *
 * Return: nothing
 */

void puts_half(char *str)

{
	int i, half;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	half = (i + 1) / 2;

	for (i = half; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');
}
