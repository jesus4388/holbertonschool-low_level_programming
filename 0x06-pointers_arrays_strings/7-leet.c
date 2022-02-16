#include "main.h"
/**
 * leet - string into 1337
 * @c: string
 * Return: c
 */
char *leet(char *c)
{
	int cd[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int nu[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1,};
	int a = 0;
	int b = 0;

	for (; c[a]; c++)
	{
		for (; cd[b]; b++)
		{
			if (c[a] == cd[b])
			{
				c[a] = nu[b];
			}
		}
	}
	return (c);
}
