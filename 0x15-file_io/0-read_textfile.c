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
	char *total;

	total = malloc(sizeof(char) * letters);
	if (total == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	if (x == -1)
		return(0);
	y = read(x, total, letters);
	if (y == -1)
		return (0);
	z = write(STDOUT_FILENO, total, y);
	if (z == -1)
		return (0);

	close(x);
	free(total)

	return (z);
}
