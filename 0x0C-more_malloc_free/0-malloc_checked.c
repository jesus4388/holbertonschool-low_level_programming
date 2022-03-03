#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: pointer
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b);

	if (p == NULL)
	exit(98);

	return (p);
}
