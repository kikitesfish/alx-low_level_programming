#include <stdio.h>
/**
 * main - main point
 *
 * Return: always 0
 */

int main(void)
{
	int i = 1;

	while (i++ < 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if (i != 100)
			{
			printf("Buzz ");
		}
		else
		{
			printf("%d", i);
		}
		
		{
			printf(" ");
		}
		i++;
	}
		printf("\n");
		return (0);
}
