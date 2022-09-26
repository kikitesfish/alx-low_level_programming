#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be copied
 * @src: source of data to be copied
 * @n: bytes of the memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
