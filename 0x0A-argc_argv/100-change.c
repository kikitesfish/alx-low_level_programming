#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coin_conv - coin converter
 * @i: intiger
 *
 * Return: the number of coins
 */

int coin_conv(int i)
{
	int count = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i -= 2;
		else if (i % 25 == 0)
			i -= 25;
		else if (i % 10 == 0)
			i -= 10;
		else if (i % 5 == 0)
			i -= 5;
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i -= 1;
			else
				i -= 2;
		}
		else
			i -= 1;

		count++;
	}

	return (count);
}

/**
 * main - the minimum number of coins to make change for an amount of money
 * @argc: number argument
 * @argv: arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");

	else
	{
		coin = coin_conv(i);

		printf("%d\n", coin);
	}

	return (0);
}
