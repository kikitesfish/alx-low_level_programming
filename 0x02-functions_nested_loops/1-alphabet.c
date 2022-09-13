#include "main.h"

/**
 * print alphabet - print alphabet
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

}
