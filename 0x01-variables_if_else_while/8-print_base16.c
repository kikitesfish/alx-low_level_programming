#include <stdio.h>
#include <unistd.h>

/**
 * main - numbers
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	char b = '0';

	while (b <= '8')
	{
		putchar(b);
		b++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
