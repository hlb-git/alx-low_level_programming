#include "main.h"

/**
 * create_file - creates a file and puts some characters in it
 * @filename: as the name implies, thats the file name
 * @text_content: the content to put int he file
 * Return: returns the number of characters it wrote in the file
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fil_des, tot_wrote, closed, len = 0;

	if (filename == NULL)
		return (-1);
	fil_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	if (fil_des == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;

		tot_wrote = write(fil_des, text_content, len);
		if (tot_wrote == -1)
			return (-1);
	}

	closed = close(fil_des);
	if (closed == -1)
		return (-1);
	return (1);

}
