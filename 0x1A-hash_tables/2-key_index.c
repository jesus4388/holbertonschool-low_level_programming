#include "hash_tables.h"
/**
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, mod = 0;

	if (size < 1)
		return(-1);

	index = hash_djb2(key);
	mod = index % size;
	return(mod);
}
