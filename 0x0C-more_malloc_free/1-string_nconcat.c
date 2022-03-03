#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: 
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int a = 0;
	int j, i = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(strlen(s1) + strlen(s2) + 1);
	if (strlen(s2) > strlen(n))
		strlen(n) = strlen(s2);
	if (p != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; s2[j]; j++)
		{
			p[i] = s2[j];
			i++;
		}
	}
	return (p);
}
