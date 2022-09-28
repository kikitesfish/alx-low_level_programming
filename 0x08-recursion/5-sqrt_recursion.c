#include "main.h"

int sqrt(int i, int r);
int _sqrt_recursion(int n);

/**
 * sqrt - natural square root of input number
 * @i: intiget to the root
 * @r: the root
 *
 * Return: the square root
 */

int sqrt(int i, int r)
{
	if ((r * r) == i)
		return (r);

	if (r == i / 2)
		return (-1);

	return (sqrt(i, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: intiger
 *
 * Return: _sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (sqrt(n, r));
}
