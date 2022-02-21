#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character
 * @s: string
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
return ('\0');
}
