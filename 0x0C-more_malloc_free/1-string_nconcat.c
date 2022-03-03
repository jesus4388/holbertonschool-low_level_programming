#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: sizei
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	int i = 0;
	unsigned int j, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s2) > n)
		k = n;
	else
		k = strlen(s2);
	p = malloc(strlen(s1) + k + 1);
	if (p != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; s2[j] && j < n; j++)
		{
			p[i] = s2[j];
			i++;
		}
		p[i] = 0;
	}
	return (p);
}
