#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: an array of integers
 * @n: The number of elements in the array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int tmp;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
