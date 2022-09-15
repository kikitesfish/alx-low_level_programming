#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle
 * @size: height of triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	int i;
	int x;
	int y;

	for (i = 0; i < size; i++)
	{
		for (y = size - 1 - i; y > 0; y--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
