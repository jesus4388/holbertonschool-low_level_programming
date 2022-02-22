#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix
 * @a: string
 * @size: number
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int suma1 = 0;
	int suma2 = 0;

	for (; i <= (size * size);)
	{
		suma1 = suma1 + a[i];
		i = i + size + 1;
	}

	for (; j < (size * size - 1);)
	{
		suma2 = suma2 + a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", suma1, suma2);
}
