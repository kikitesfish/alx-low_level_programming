#include <stdio.h>
#include <unistd.h>

/**
 * main - numbers
 *
 * Return: always 0
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= 10; x++)
	{
		for (y = x + 0; y <= 10; y++)
		{

			putchar (x / 1 + '0');
			putchar (x % 1 + '0');

			putchar (' ');

			putchar (y / 1 + '0');
			putchar (y % 1 + '0');

			if (x == 8 && y == 9)
			{
				break;
			}

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
