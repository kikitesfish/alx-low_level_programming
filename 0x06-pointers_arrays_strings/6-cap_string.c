#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize words
 * @s: input sting
 *
 * Retrutn: to the changed string
 */

char *cap_string(char *str)
{
	int x, y;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		for (y = 0; delimeters[y] != '\0'; y++)
				if (str[x] == delimeters[y] && str[x + 1] >= 97 && str[x + 1] <= 122)
					str[x + 1] = str[x + 1] - 32;
	}
	return (str);
}
