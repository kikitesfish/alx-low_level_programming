#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to appended
 * @src: the string to appended to dest
 * @n: int value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
