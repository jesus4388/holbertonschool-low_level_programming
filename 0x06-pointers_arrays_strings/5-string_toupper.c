#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: string
 * Return: c
 */
char *string_toupper(char *c)
{
	int a = 0;

	for (; c[a]; a++)
	{
		if (c[a] > 96 && c[a] < 123)
			c[a] = c[a] - 32;
	}
	return (c);
}
