#include "main.h"

/**
 * swap_int - swap two integers
 * @a: A pointer
 * @b: B pointer
 * Return: always void
 */

void swap_int(int *a, int *b)
{
	int swaper;

	swaper = *a;
	*a = *b;
	*b = swaper;
}
