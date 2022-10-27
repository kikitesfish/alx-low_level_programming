#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 or -1
 */

int get_endianness(void)
{
	int i = 1;
	char *a = (char *)&i;

	if (*a == 1)
		return (1);

	return (0);
}
