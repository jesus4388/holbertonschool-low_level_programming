#include <stdio.h>
/**
 * _strpbrk - function that searches a string
 * @s: string
 * @accept: coincidence
 * Return: p
 */
char *_strpbrk(char *s, char *accept)
{
	int y = 0;
	int a;
	int si;
	char *p;

	p = s;

	if (s != NULL)
	{
		for (si = 0; s[si]; si++)
		{
			if (y == 1)
				break;

			for (a = 0; accept[a]; a++)
			{
				if (s[si] == accept[a])
				{
					y = 1;
					break;
				}
			}
			if (y)
				break;
		}
		if (y || accept == 0)
			p = s + si;
		else
			p = NULL;
	}
	return (p);
}
