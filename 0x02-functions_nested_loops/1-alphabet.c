#include "main.h"

/**
 * main - print alphabet
 *
 * Return: always 0
 */

void print_alphaber(void)
{
	char alphaber = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(alphaber);
	}

	_putchar('\n);

	return(0);
}
