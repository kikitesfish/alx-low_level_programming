#include <stdio.h>

/**
 * main - prints
 *
 * Return: always 0
 */
int main(void)
{
int a = 0;
int b = 3;
int c = 5;
int d = 0;
int e = 1024;

while (a == 0)
{
	if (b < e)
	{
		d += b;
		b += 3;
	}

	if (c < e && (c % 3) != 0)
	{
		d += c;
		c += 5;
	}
	else if (c % 3 == 0)
	{
		c += 5;
	}

	if (b >= e && c >= e)
	{
		a = 1;
	}
	printf("%d\n", d);
	return (0);
}
