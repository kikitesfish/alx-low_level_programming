#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - print numbers
 * @n: intigers
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		i = -n;
		_putchar('_');
	}

	else
	{
		i = n;
	}

	if (n1 / 10)
	{
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
}
