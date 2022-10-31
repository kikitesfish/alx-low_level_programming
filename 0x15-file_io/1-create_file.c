#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: a pointer to write in the file
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[x];)
			z++;
	}

	x = open((filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, z);
	
	if (x == -1 || w == -1)
		return (-1);
		
	close(x);

	return (1);
}
