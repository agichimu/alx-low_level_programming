#include "main.h"

/**
 * create_file - used to create a file.
 * @filename: name of file to be created.
 * @text-content: is a null string which is terminated.
 * Return: on succes 1 and on faiure -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w_status, wrd = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[wrd] != '\0')
			wrd++;
		w_status = write(fd, text_content, wrd);
		if (w_status == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
