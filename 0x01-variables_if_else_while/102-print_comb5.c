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

	for (x = '0'; x <= 50; x++)
	{
		for (y = x + 1; y <= 50; y++)
		{

			putchar (x / 5 + '0');
			putchar (x % 5 + '0');

			putchar (' ');

			putchar (y / 5 + '0');
			putchar (y % 5 + '0');

			if (x == 48 && y == 49)
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
