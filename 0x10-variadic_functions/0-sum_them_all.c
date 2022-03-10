#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of argument
 * Return: 0 or suma
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, suma = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		suma = suma + va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (suma);
}
