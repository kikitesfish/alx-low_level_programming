#include "dog.h"
#include <stdlib.h>

/**
 * _copy - copy of string
 * @src: to make copy
 *
 * Return: pointer/
 */

char *_copy(char *src)
{
	char *a;
	int i;
	int j;

	if (src == NULL)
	{
		return (NULL);
	}

	for (j = 0; src[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * (j + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		a[i] = src[i];
	}

	a[i] = '\0';
	return (a);
}

/**
 * new_dog - create a new dog variable
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to varialbe
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lucky;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	lucky = malloc(sizeof(dog_t));
	if (lucky == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(lucky);
		return (NULL);
	}
	(*lucky).name = new_name;

	(*lucky).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*lucky).name);
		free(lucky);
		return (NULL);
	}
	(*lucky).owner = new_owner;

	return (lucky);
}
