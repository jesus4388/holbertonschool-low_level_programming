#include "main.h"
/**
 * rot13 - encodes a string
 * @c: string
 * Return: nothing
 */
char *rot13(char *c)
{
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int br = 0;
	int cd = 0;

	for (; c[br]; br++)
	{
		for (cd = 0; cd < 52; cd++)
		{
			if (c[br] == alp[cd])
			{
				c[br] = rot[cd];
				break;
			}
		}
	}
	return (c);
}
