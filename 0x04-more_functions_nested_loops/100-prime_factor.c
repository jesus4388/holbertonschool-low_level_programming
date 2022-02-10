#include <stdio.h>
/**
 * main - prime factor
 * void nothing
 * Return: 0
 */

int main(void)
{
	int long a;

	int long n = 612852475143;

	for (a = 2; a < n; a++)
	{
		if (n % a == 0)
		{
		n = n / a;
		}
	}
	printf("%lu", a);
	putchar (10);
	return (0);
}
