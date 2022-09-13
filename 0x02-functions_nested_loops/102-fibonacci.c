#include <stdio.h>

/**
 * main - first 50
 *
 * Return: always 0
 */

int main(void)
{
	i;
	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}
	printf("\n");
	return (0);
