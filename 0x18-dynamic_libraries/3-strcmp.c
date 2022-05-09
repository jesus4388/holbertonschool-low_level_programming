#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: s1 s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	for (; s1[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		return (s1[a] - s2[a]);
	}
	if (s2[a] != '\0')
	return (s1[a] - s2[a]);
return (0);
}
