#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argumento
 * @argv: pointers
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int a = 1;
	int b = 0;
	int sum = 0;

	if (argc < 1)
		return (0);

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < 48 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}

		printf("%d\n", sum);
		return (0);
}
