#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: value to set
 * @n: bytes to use of the memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i =o; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
