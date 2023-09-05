#include "main.h"

/**
 * main - the starting point of the program
 * @argc: the number of argurment from the command line
 * @argv: the arrar keeping the data from the command line
 * Return: returns 1 on success
 */

int main(int argc, char *argv[])
{
	ssize_t fil_des, tot_read, written, closed;
	void *buffer;

	buffer = malloc(1024);
	if (!buffer)
		return (-1);

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fil_des = open(argv[1], O_RDWR);
	if (fil_des == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	tot_read = read(fil_des, buffer, 1024);
	if (tot_read == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	fil_des = open(argv[2], O_RDWR | O_TRUNC, 0664);
	if (fil_des == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	written = write(fil_des, buffer, 1024);
	if (written == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	closed = close(fil_des);
	if (closed == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fil_des);
		exit(100);
	}
	free(buffer);
	return (1);
}
