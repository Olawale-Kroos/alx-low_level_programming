#include "holberton.h"
#include <stdio.h>
/**
  * append_text_to_file - append to a file
  * @filename: the name of the file
  * @text_content: NULL terminated string to write to file
  * Return: 1 if successful, else -1 if failure occur
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int v;
	ssize_t len;

	if (!filename)
		return (-1);

	v = open(filename, O_RDWR | O_APPEND);
	if (v == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		write(v, text_content, len);
	}
	close(v);

	return (1);
}
