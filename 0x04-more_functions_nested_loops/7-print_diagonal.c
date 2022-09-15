#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: print intiger
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i;
	int x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
