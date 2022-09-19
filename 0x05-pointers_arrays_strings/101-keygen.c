#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program to generate random password
 * Return: 0
 */

int main(void)
{
	int result;
	char ch;

	srand(time(NULL));
	while (result <= 2645)
	{
		ch = rand() % 128;
		result += ch;
		putchar(ch);
	}
	putchar(2772 - result);
	return (0);
}
