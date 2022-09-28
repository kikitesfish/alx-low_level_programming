#include "main.h"

int natural_number(int n, int i);
int is_prime_number(int n);

/**
 * natural_number - Checks if a natural number.
 * @n: the number to be checked
 * @i: intiger
 *
 * Return: natural_number.
 */

int natural_number(int n, int i)
{
	if (n % i == 0)
		return(0);

	if (i == n / 2)
		return (1);

	return (natural_number(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: the number to be checked
 *
 * Return: natural_number
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (natural_number(n, i));
}
