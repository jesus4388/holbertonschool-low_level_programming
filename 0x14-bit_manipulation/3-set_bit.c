#include <stdio.h>
#include "main.h"
/**
 * set_bit -  function that sets the value of a bit to 1
 * @n: pointer
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j = 0;

	if (index < 33)
	{
		j = 1 << index;

		*n = (*n) | j;
		return (1);
	}
	else
		return (-1);
}
