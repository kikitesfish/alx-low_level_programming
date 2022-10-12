#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size
 * @cmp: compare values
 *
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
