#include <stdio.h>
/**
 * main - function
 * @argc: arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
