#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 *@ptr: size
 *@old_size: old
 *@new_size: new
 *Return: p or 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (0);
	}
return (0);
}
