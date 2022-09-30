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
	int ind = 0, dest_len = 0;

	while (dest[ind++])
		dest_len++;
	for (ind = 0; src[ind] && ind < n; ind++)
		dest[dest_len++] = src[ind];
	return (dest);
}
