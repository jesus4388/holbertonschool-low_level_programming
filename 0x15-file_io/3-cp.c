#include "main.h"
/**
 * closing - close function
 * @n: n
 * Return: an int
 */
void closing(int n)
{
	int j = 0;

	j = close(n);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
}

/**
 * main - copy a file
 * @argc: file from
 * @argv: file to
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int sd = 0, sf = 0, j = 1024, d = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	sf = open(argv[1], O_RDONLY);
	if (sf < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sd = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (sd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (j == 1024)
	{
		j = read(sf, buffer, 1024);
		if (j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		d = write(sd, buffer, j);
		if (d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closing(sf);
	closing(sd);
	return (0);
}
