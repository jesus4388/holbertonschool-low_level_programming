#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - a function that converts a binary
 * @b: pointer
 * Return: 0 or bin
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int bin = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		bin <<= 1;
		bin = bin + b[i] - '0';
		i++;
	}
	return (bin);
}
