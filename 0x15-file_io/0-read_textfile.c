#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @*filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: 0 - If the function fails or filename is NULL
 *         Else - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r;
	ssize_t w;
	int vi;
	char *buff;

	if (filename == NULL)
		return (0);
	vi = open(filename, O_RDONLY);
	if (vi == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(vi);
		return (0);
	}
	r = read(vi, buff, letters);
	close(vi);
	if (r == -1)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	if (r != w)
		return (0);
	return (w);
}
