#include "main.h"
#include <stdio.h>
/**
 * print_array - elements of an array of integers
 * @a: print
 * @n: print
 * Return: b
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (; b < n; b++)
	{
		printf("%d", a[b]);
	}
		if (b != n)
		{

			printf(" ,");
			printf("\n");
		}
}
