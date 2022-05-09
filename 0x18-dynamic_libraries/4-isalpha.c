#include "main.h"
/**
 * _isalpha - - description: alphabet checker
 * @c: a function that checks the character for lowercase and uppercase.
 * Return: if it matches is 0 and if not 1
 */

int _isalpha(int c)
{
	if ((c > 97 && c <= 122) || (c > 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
