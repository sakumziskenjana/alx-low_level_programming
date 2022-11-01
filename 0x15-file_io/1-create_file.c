#include "main.h"

/**
 * create_file - ...
 * @filename: The file name
 * @text_context: ...
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)

		write(fd, text_content,
				_strlrn(text_content));

	close(fd);
	return (1);
}
