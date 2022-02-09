#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - Indicates whether a character is an uppercase letter
 * @c: int
 * Return: if it is uppercase it receives 1 otherwise 0
 */

int _isupper(char c)

{
if (c == 'A' && c <= 'Z')
{
	return (1);
}
else if (c == 'a' && c <= 'z')
{
	return (0);
}
else
	return (0);
}
