#include "main.h"
/**
 * cap_string -
 * ²
 * Return:
 */
char *cap_string(char *c)
{
	int a = 0;

	for(; c[a]; a++)
	{
		if((c[a] == 44) && (c[a] == 59) && (c[a] == 46) && (c[a] == 33) && (c[a] == 63) && (c[a] == 47) && (c[a] == 40) && (c[a] == 41) && (c[a] == 123) && (c[a] == 125) && (c[a] == 32))
		{
			if(a > 96)
			c[a + 1] = c[a + 1] - 32;
		}
	}
	return (c);
}
