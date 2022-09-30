#include <stdio.h>
#include <stdlib.h>

/**
 * main -  minimum number of coins to make change for an amount of money
 * @argc: number of argumen
 * @argv: arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	while (i > 0)
	{
		coins++;
		if ((i - 25) >= 0)
		{
			i -= 25;
			continue;
		}
		if ((i - 10) >= 0)
		{
			i -= 10;
			continue;
		}
		if ((i - 5) >= 0)
		{
			i -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			i -= 2;
			continue;
		}
		i--;
	}
	printf("%d\n", coins);

	return (0);
}
