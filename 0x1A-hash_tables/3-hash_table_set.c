#include "hash_tables.h"
/**
 * hash_table_set - set
 * @ht: ht
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *aux = NULL;
	unsigned long int index = 0;

	if (strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = aux;
		aux = new;
		return (1);
	}
	return (0);
}
