#include "main.h"

/**
 * create_file - creates a file
 * @filename: The file name
 * @text_context: A pointer to a string to write in the file
 *
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_context[len];)
			len++;
	}

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w = write(o, text_context, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
