#include <stdio.h>

/**
 * main - alphabets
 *
 * Return: always 0
 */

int main(void)
{
	int alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar ('\n');

	return (0)
}
