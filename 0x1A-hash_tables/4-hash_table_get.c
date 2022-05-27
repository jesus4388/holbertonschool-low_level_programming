#include "hash_tables.h"
/**
 * hash_table_get - hash_table_get
 * @ht: ht
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *aux;

	if (ht == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	aux = ht->array[index];
	while (aux->next)
	{
		if (aux->key == key)
			return (aux->value);
		aux = aux->next;
	}
	return (aux->value);
}
