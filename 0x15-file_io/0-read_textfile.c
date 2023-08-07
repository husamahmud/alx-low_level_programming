#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the name of the file to read from
 * @letters: the maximum number of characters to read
 *
 * Return: number of characters written to the standard output, or -1 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_rd, n_wr;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = (char *) malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	n_rd = read(fd, buf, letters);
	n_wr = write(STDOUT_FILENO, buf, n_rd);

	free(buf);
	close(fd);
	return (n_wr);
}
