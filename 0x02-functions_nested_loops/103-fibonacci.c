#include <stdio.h>
/**
 * main - main
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0, b = 1, c = 0, d = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			d += c;
	}
	printf("%i\n", d);
	return (0);
}
