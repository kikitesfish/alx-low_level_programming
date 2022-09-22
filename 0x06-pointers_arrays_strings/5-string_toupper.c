#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @s: the string
 *
 * Retrun: changed string
 */

char *string_toupper(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	retrun (s);
}
