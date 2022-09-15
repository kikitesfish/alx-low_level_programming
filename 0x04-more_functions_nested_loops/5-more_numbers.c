#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers between 0 to 14
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		x = 0;
		while (x <= 14)
		{
			if (x >= 10)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			i++;
		}
		_putchar('\n');
	}
}
