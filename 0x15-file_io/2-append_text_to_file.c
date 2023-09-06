#include "main.h"

/**
 * append_text_to_file - append text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: on succes 1 && on failure returns -1;
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, app, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		app = write(fd, text_content, i);
		if (app < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
