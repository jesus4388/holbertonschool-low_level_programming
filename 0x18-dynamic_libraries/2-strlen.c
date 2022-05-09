#include "main.h"
#include <string.h>
/**
 * _strlen - length of a string.
 * @s: print the length
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i];)
		i = i +1;

	return (i);
}
