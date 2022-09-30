#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int x, y, lng, sum;
	char *p;

	if (argc < 2)
		printf("0\n")
	else
	{
		sum = 0;
		for (x = 1; x < argc; x++)
		{
			p = argv[x];
			lng = strlen(p);

			for (y = 0; y < lng; y++)
			{
				if (isdigit(*(p + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[x]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
