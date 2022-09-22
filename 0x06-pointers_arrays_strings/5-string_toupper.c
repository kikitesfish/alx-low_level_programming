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
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
