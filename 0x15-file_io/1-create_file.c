#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file or truncate it
 * @*filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 if successful, else -1 if failure occcur
 */
int create_file(const char *filename, char *text_content)
{
	int v;
	int i;
	int len = 0;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	v = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(v, text_content, len);

	if (v == -1 || i == -1)
		return (-1);

	close(v);

	return (1);
}

