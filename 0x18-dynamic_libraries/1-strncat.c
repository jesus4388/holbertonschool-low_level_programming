#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Return a pointer to the resulting string dest
 * @dest: string
 * @src: string
 * @n: number of array
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	for (; dest[a]; a++)
		;
	for (; b < n && src[b]; b++)
	{
		dest[a] = src[b];
		a++;
	}
dest[a] = '\0';
return (dest);
}
