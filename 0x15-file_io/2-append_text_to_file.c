#include "main.h"

/**
 * append_text_to_file - appends to an exisiting file
 * @filename: the file to append to
 * @text_content: what to append to the file
 * Return: returns 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t written, fil_des, closed;
	int len = 0;

	if (!filename)
		return (-1);

	fil_des = open(filename, O_RDWR | O_APPEND);
	if (fil_des == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		written = write(fil_des, text_content, len);
		if (written == -1)
			return (-1);
	}
	closed = close(fil_des);
	if (closed == -1)
		return (-1);

	return (1);
}
