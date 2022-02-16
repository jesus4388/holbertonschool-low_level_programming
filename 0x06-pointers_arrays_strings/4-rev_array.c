#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: string
 * @n: number of characters
 * Return:
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int temp = 0;
	int c;

	c = n;

	for (; b < n; b++)
	{	
		if (b >= c)
		break;

		c--;

	temp = a[b];
	a[b] = a[c];
	a[c] = temp;
	}
}
