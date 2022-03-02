#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: p
 */
char *_strdup(char *str)
{
	int a = 0;
	char *p = NULL;

	if (str != NULL)
	{
		p = (char *)malloc(strlen(str) + 1);
		if (p != NULL)
		{
			for (a = 0; str[a]; a++)
			{
				p[a] = str[a];
			}
		}
	}
	return (p);
}
