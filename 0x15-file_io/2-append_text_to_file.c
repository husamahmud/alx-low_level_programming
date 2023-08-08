#include "main.h"

/**
 * appent_text_to_file - appends text at the end of a file
 * @filename: the name of the file to read from
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, n;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
		len = (int) strlen(text_content);

	n = write(fd, text_content, len);
	if (n < 0)
		return (-1);

	close(fd);
	return (1);
}
