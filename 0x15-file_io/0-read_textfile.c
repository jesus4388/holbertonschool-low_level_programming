#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: file name
 * @letters: number of letters
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int let = 0;
	char *buf;
	ssize_t ret = 0;

	buf = malloc(letters);
	if (!buf)
		return (0);

	if (filename == NULL)
		return (0);

	let = open(filename, O_RDONLY);
	if (let < 0)
	{
		return (0);
	}
	ret = read(let, buf, letters);
	close(let);
	write(STDOUT_FILENO, buf, ret);
	free(buf);

	return (ret);
}
