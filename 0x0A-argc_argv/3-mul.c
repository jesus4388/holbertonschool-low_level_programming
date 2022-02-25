#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication of two numbers
 * @argc: argument
 * @argv: number
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int mul = 0;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = (a * b);
		printf("%d\n", mul);
	}
	return (0);
}
