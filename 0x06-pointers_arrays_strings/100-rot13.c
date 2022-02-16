#include "main.h"
/**
 * rot13 -
 * @
 * Return:
 */
char *rot13(char *c)
{
	char alp[] = "ABCDFGHIJKLMNOPQRSTUVXYZabcdefghijklmnopqrstuvxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int br = 0;
	int cd = 0;

	for(br = 0; c[br]; br++)
	{
		for(cd = 0; cd < 53; cd++)
		{
			if(c[br] == alp[cd])
				c[br] = rot[cd];
		}
	}
	return (0);
}
