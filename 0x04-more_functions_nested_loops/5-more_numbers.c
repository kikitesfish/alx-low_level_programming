#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int x;
	int y;
	int z;

	i = 0;
	z = 0;
	while (i < 10)
	{
		while (z <= 14)
		{
			if (z < 10)
			{
				y = z;
			}

			else
			{
				x = z / 10;
				y = z % 10;
				_putchar (x + '0');
			}

			_putchar (y + '0');

			z++;
		}
		i++;
		z = 0;
		_putchar ('\n');
	}
}
