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
	char b = '11';

	while (b <= '11')
	{
		putchar(b);
		b++
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
