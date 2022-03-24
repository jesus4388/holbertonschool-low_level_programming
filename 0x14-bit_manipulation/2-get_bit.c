#include <stdio.h>
#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: int
 * @index: index
 * Return: a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int aux = 0;

	if (index < 33)
	{
		aux = (n >> index);
		if (aux == n)
			return (0);
		else
			return (1);
	}
	else
		return (-1);
}
