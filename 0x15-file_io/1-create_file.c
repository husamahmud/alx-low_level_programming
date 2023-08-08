#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to read from
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (!filename)
		return (0);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (!text_content)
		text_content = "";

	n = write(fd, text_content, strlen(text_content));
	if (n < 0)
		return (-1);

	close(fd);
	return (1);
}
