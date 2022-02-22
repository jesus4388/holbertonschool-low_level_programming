#include "main.h"
/**
 * _strspn - the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: r
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int si;
	unsigned int r = 0;

	for (a = 0; accept[a]; a++)
	{
		for (si = 0; s[si]; si++)
		{
			if (s[si] == accept[a])
			r++;
			if (s[si] == ',')
			break;
		}
	}
	return (r);
}
