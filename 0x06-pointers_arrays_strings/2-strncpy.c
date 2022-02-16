#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: string
 * @src: string
 * @n: variable
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
