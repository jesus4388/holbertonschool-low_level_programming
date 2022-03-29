#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: terminated string to add at the end of the file
 * Return: Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, j = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);

	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	j = strlen(text_content);
	write(fd, text_content, j);
	close(fd);
	return (1);
}
