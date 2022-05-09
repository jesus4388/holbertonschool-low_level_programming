#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: string dest
 * @src: string added
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	for (; dest[a]; a++)

		a = a + 1;

	for (; src[b]; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
return (dest);
}
