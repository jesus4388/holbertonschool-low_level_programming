#include <stdio.h>
#include <stdlib.h>
/**
 * main - change for an amount of money
 * @argv: argument
 * @argc: number argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
			printf("0\n");
		if (cents > 25)
			printf("%d\n", (cents / 25) + (cents % 25));
		else if (cents > 10)
			printf("%d\n", cents % 10);
		else
			printf("%d\n", cents / 10);
	}
	return (0);
}
