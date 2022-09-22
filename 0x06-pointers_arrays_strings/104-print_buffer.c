#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: the buffer
 * @size: number of size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int by, ind;

	for (by = 0; by < size; by += 10)
	{
		printf("%08x: ", by);

		for (ind = 0; ind < 10; ind++)
		{
			if ((ind + by) >= size)
				rintf("  ");
			else
				printf("%02x", *(b + ind + by));
			if ((ind % 2) != 0 && ind != 0)
				printf(" ");
		}
		for (ind = 0; ind < 10; ind++)
		{
			if ((ind + by) >= size)
				break;
			else if (*(b + ind + by) >= 31 &&
					*(b + ind + by) <= 126)
				printf("%c", *(b + ind + by));
			else
				printf(".");
		}
		if (by >= size)
			continue;
		printf("\n");

		if (size <= 0)
			printf("\n");
		return (r + r_ind);
	}

	else if (tens && r_ind < 0)
		return (0);

	return (r + r_ind + 1);
}
