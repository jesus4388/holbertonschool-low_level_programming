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
		if (cents <= 0)
			printf("0\n");
		if (cents == 1 || cents == 2 || cents == 5 || cents == 10 || cents == 25)
			printf("1\n");
		if (cents > 25)
			printf("%d\n", (cents % 25) + (cents / 25));
		if ((cents > 10) && (cents < 25))
			printf("%d\n", cents % 10);
		if (cents < 10)
			printf("%d\n", cents / 2);
		
	}
	return (0);
}
