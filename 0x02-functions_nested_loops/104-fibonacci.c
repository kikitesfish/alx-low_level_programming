#include <stdio.h>

/**
 * main - main
 *
 * Return: always (0)
 */

int main(void)
{
	unsigned long i;
	unsigned long j = 1;
	unsigned long k = 2;
	unsigned long l = 1000000000;
	unsigned long m;
	unsigned long m2;
	unsigned long n1;
	unsigned long n2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}

	m = (j / l);
	m2 = (j % l);
	n1 = (k / l);
	n2 = (k % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", n1 + (n2 / l));
		printf("%lu", n2 % l);
		n1 = n1 + m;
		m = n1 - m;
		n2 = n2 + m2;
		m2 = n2 - m2;
	}
	printf ("\n");
	return (0);
}
