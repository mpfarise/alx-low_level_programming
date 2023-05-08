#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads the text file and prints to STDOUT.
 * @filename: The text file is being read.
 * @letters: The number of letters that are to be be read.
 *
 * Return: when the actual number of bytes read and printed.
 *         0 if the function fail or if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

		if (!buf)
		{
			close(fd);
			return (0);
		}

	w = read(fd, buf, letters);
		if (w == -1)
		{
			free(buf);
			close(fd);
			return (0);
		}

	w = write(STDOUT_FILENO, buf, w);
		if (w == -1 || w != (ssize_t)letters)
		{
			free(buf);
			close(fd);
			return (0);
		}

	free(buf);
	close(fd);

	return (w);
}
