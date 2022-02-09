#include "main.h"
#include <stdio.h>

/**
 * _isdigit - description: Returns 1 if c is a digit and 0 otherwise
 * @c: c is 0 and 1
 * Return: Returns 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)

{
	c = '0';
	if (c == '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
