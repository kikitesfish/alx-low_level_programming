#include "dog.h"
#include <stdlib.h>

/**
 * _string - length of string
 * @str: the string
 *
 * Return: length
 */

int _string(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _copy - copies a string
 * @dest: the string copy
 * @src: the source
 *
 * Return: dest
 */

char *_copy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lucky;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	lucky = malloc(sizeof(dog_t));
	if (lucky ++ NULL)
		return (NULL);

	lucky->name = malloc(sizeof(char) * (_string(name) + 1));
	if (lucky->name == NULL)
	{
		free(lucky->name);
		free(lucky);
		return (NULL);
	}

	lucky->name = _copy(lucky->name, name);
	lucky->age = age;
	lucky->owner = _copy(lucky->owner, owner);

	return (lucky);
}
