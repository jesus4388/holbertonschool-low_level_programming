#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: dest
 * @src: copy
 * @n:Numbers bytes a copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *aux = 0;

	for (; i < n; i++)
	{
		aux = src;
		dest = aux;
	}
	return (dest);
}
