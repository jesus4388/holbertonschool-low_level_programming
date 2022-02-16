#include "main.h"
/**
 * cap_string - lowercase letters in a string to uppercase
 * @c: string
 * Return: c
 */
char *cap_string(char *c)
{
	int a = 0;

	if(c[a] > 96 && c[a] < 123)
		c[a] = c[a] - 32;

	for (; c[a]; a++)
	{
		if (c[a] == 44 || c[a] == 59 || c[a] == 46 || c[a] == 33 ||
		c[a] == 63 || c[a] == 47 || c[a] == 40 || c[a] == 41 || c[a] == 123 ||
		c[a] == 125 || c[a] == 32 || c[a] == 10 || c[a] == 9)
		{
			if (c[a + 1] > 96 && c[a + 1] < 123)
			c[a + 1] = c[a + 1] - 32;
		}
	}
	return (c);
}
