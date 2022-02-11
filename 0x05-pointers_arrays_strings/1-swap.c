#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the values of two integers
 * @a: swap
 * @b: swap
 * Return: swap the values
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;

	*b = c;
	*a = d;
}
