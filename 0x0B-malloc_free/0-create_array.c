#include <stdlib.h>
/**
 * create_array - an array of chars, and initializes it with a specific char.
 * @size: array
 * @c: initializes char
 * Return: b
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *b = NULL;

		if (size > 0)
		{
			b = malloc(size);
			if (b != NULL)
			{
				for (a = 0; a <= size; a++)
				{
					b[a] = c;
				}
			}
		}
		return (b);
}
