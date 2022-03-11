#include <stdarg.h>
#ifndef variadic
#define variadic
typedef struct op
{
	char *c;
	void (*f)(va_list p);
} opp;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
