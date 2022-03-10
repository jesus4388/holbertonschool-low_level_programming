#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations
 * @argc: array size
 * @argv: array
 * Return: void
 */
int main(int argc, char *argv[])
{
	int one = 0;
	int two = 0;
	op_t function;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0]
	!= '*' && argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);

	function.f = get_op_func(argv[2]);

	printf("%d\n", function.f(one, two));

	return (0);
}
