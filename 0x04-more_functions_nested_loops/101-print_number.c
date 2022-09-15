#include "main.h"
/**
 * print_number - print numbers
 * @n: intigers
 * Return: always 0
 */

void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
