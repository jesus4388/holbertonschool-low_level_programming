#include <stdio.h>
#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * @m: int
 * @n: int
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = 0;
	int i = 0;

	l = m ^ n;

	while (l)
	{
		l = l & (l - 1);
		i++;
	}
	return (i);
}
