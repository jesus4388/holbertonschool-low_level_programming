#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - all natural numbers from n to 98
 * @n: numbers
 * Return: 1 sucess or 0 in fail
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
			{	printf(", ");
			}
			else
			{	printf("\n");
			}
		}
}
