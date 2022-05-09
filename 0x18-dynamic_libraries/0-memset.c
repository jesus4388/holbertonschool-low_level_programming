#include "main.h"
/**
 * _memset - constant byte
 * @s: pointer
 * @b: reference
 * @n: characteres
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
