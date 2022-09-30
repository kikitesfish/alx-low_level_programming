#include <stdio.h>
#include <stdlib.h>

/**
 * main -  minimum number of coins to make change for an amount of money
 * @argc: length
 * @argv: number
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, c, d;
	int coins[] = {25, 10, 5, 2, 1};

	a = b = c = d

		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}

	b = atoi(argv[1]);

	if (b <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (c[a] != '\0')

	{
		if (b >= c[a])

	{
		aux = (b / c[a]);
		c += d;
		b -= c[a] * aux;
	}

	a++;
	}

	printf("%d\n", c);
	return (0);
}
