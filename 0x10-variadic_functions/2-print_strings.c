#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
