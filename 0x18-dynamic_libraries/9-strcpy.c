#include "main.h"
/**
 * _strcpy - string
 * @dest: destination
 * @src: string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
