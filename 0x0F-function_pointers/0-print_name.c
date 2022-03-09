#include <stddef.h>
/**
 * print_name - print name
 * @name: name
 * @f: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		(*f)(name);
}
