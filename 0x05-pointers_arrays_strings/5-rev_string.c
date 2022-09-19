#include "main.h"

/**
 * rev_string - reverse string
 * @s: a pointer to a sting
 */

void rev_string(char *s)
{
	char *x = s;
	char n[500];
	short y =0;

	while (*s != '\0')
	{
		n[y] = *s;
		s++;
		y++;
	}
	y = 0;

	while (s > x)
	{
		s--;
		*s = n[y];
		y++;
	}
}
