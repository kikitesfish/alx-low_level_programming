#include "main.h"

int length_string(char *s);
int string_palindrome(char *s, int l, int i);
int is_palindrome(char *s);

/**
 * length_string - Returns the length of a string
 * @s: The string to be measured
 *
 * Return: length_string
 */

int length_string(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += length_string(s + l);
	}

	return (1);
}

/**
 * string_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @l: The length of s.
 * @i: The index of the string to be checked
 *
 * Return: string_palindrome
 */

int string_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);

	if (s[i] == s[l - i - 1])
		return (string_palindrome(s, l, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: string_palindrome
 */

int is_palindrome(char *s)
{
	int i = 0;
	int l = length_string(s);

	if (!(*s))
		return (1);

	return (string_palindrome(s, l, i));
}
