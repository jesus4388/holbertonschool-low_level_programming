#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int j = 0;

	va_start(ap, n);
	
	if (separator != NULL)
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		printf("%d", j);
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
