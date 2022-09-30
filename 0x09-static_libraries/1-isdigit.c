#include "main.h"
/**
 * _isdigit - if it is a digit
 * @c: print int
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
