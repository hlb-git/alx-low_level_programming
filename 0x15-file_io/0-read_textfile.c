#include "main.h"

/**
 * read_textfile - reads the content of a file
 * @filename: the file name that's gonna be used
 * @letters: the total number of letters in the file
 * Return: the number of leters it was able to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t tot_read, fildes, tot_wrote, closed;
	void *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fildes = open(filename, O_RDWR);
	if (fildes == -1)
		return (0);

	tot_read = read(fildes, buffer, letters);
	if (tot_read == -1)
		return (0);

	tot_wrote = write(STDOUT_FILENO, buffer, tot_read);
	if (tot_wrote == -1)
		return (0);
	closed = close(fildes);
	if (closed == -1)
		return (0);
	free(buffer);
	return (tot_wrote);
}
