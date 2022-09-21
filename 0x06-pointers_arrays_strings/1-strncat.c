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
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
