#include <stdio.h>
#include <unistd.h>

/**
 * main - alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 122; x >= 97; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
