#include "main.h"
/**
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int si = 0;
	unsigned int r = 0;

	for (; accept[a]; a++)
	{
		for (; s[si]; si++)
		{
			if (s[si] == accept[a])
			r++;
		}
	}
	return(r);
}
