#include <stdio.h>
#include "main.h"
/**
 * get_endianness - a fuction that checks the endiannes.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 4;
	int j = 1;

	j = 1 << 2;

	if (j & i)
		return (1);
	else
		return (0);

}
