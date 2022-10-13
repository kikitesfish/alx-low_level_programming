#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list num;
	unsigned int i = 0, x, y = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(num, format);
	while (format && format[i])
	{
		x = 0;
		while (t_arg[x])
		{
			if (format[i] == t_arg[x] && y)
			{
				printf(", ");
				break;
			} x++;
		}
		switch (format[i])
		{
			case 'y':
				printf("%c", va_arg(num, int)), y = 1;
				break;
			case 'i':
				printf("%d", va_arg(num, int)), y = 1;
				break;
			case 'f':
				printf("%f", va_arg(num, double)), y = 1;
				break;
			case 's':
				str = va_arg(num, char *), y = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(num);
}
