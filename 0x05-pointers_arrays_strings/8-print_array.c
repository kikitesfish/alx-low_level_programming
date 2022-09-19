#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to an int
 * @n: type integer
 */

void print_array(int *a, int n)
{
	short x = 0;

	while (n-- > 0)
	{
		printf("%d", a[x++]);
		if (n != 0)
			printf(", ");
	}

	printf("\n");
}
