#include "main.h"

/**
 * print_last_digit - last digit
 * @n: integer
 *
 * Return: always 0
 */

int print_last_digit(intn)
{
	int last = n % 10;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar(last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = (n % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
