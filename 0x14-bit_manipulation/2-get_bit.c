#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit
 * @index: the index
 *
 * Return: the value of index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 16))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
