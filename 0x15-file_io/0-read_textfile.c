#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *a;

	if (filename == NULL)
		return (0);

	a = malloc(sizeof(char) * letters);
	if (a == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(o, a, letters);
	z = write(STDOUT_FILENO, a, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(a);
		return (0);
	}

	free(a);
	close(x);

	return (z);
}
