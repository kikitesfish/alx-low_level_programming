#include "main.h"

/**
 * _strcpy - copie a sting from one aray to another
 * @dest: a pointer to the destination
 * @src: a pointer to the string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
