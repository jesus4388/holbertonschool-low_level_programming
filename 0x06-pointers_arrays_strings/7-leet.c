#include "main.h"
/**
 * leet - string into 1337
 * @c: string
 * Return: c
 */
char *leet(char *c)
{
	int cd[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int nu[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int a = 0;
	int b = 0;

	for (; c[a]; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (c[a] == cd[b])
			{
				c[a] = nu[b];
			}
		}
	}
	return (c);
}
