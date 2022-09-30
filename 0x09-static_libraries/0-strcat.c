#include "main.h"

/**
 * _strcat - concatenates src to dest
 * @dest: the destiation string to be concatenated
 * @src: the source string to append to dest
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
