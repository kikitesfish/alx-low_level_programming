#include <stdio.h>

/**
 * main - alphabets
 *
 * Return: always 0
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		else
		{
		}
	}
	putchar('\n');

	return (0);
}
