#include <stdio.h>
#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0
 * @index: index
 * @n: pointer
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 33)
	{
		*n = (*n & ~(1 << index));
		return (1);
	}
	else
		return (-1);
}
