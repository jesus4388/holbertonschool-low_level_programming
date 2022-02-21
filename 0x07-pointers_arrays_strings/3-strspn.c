#include "main.h"
/**
 * int _strspn - 
 * @
 * @
 * Return:
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int a = 0;
	unsigned int b = 0;

	for (; accept[a]; a++)
	{	
		for (; s[b]; b++)
		{
			if (s[a] == accept[b])
			i++;
		}
	}
	return(i);
}
