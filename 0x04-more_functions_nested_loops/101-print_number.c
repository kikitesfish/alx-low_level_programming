#include "main.h"

/**
 * print_number - print numbers
 * @n: intigers
 * Return: always 0
 */

void print_number(int n)
{
	int i = 0, x = 1, y = 0;

	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}

	while (n / x != 0)
	{
		x *= 10;
		i++;
	}
	x = x / 10;

	while (y < i)
	{
		_putchar('0' + n / x);
		n = n - (n / x) * x;
		x = x / 10;
		y++;
	}

	if (i == 0)
		_putchar('0' + n);

}
