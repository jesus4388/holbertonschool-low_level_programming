#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name
 * @f:
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		(*f)(name);
}
