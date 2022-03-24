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
	if (index < 33)
	{
		n >>= index;
		if ((n & 1) == 0)
			return (0);
		else
			return (1);
	}
	else
		return (-1);
}
