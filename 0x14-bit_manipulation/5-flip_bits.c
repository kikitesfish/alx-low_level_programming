#include "main.h"

/**
 * flip_bits - number of bits need to flip to get from one number to another
 * @n: number
 * @m: second number
 *
 * Return: numbers  to ger n and m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, x = 0;

	while (i > 0)
	{
		x += (i & 1);
		i >>= 1;
	}

	return (x);
}
