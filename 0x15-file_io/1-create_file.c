#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: name of the file
 * @text_content: terminated string to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, j = 0, ret = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	j = strlen(text_content);
	ret = write(fd, text_content, j);

	if (ret < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
