#include "hash_tables.h"
/**
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	hash_node_t *to_free = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		free(ht);
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		to_free = ht->array[i];
		while(aux)
		{
			aux = aux->next;
			free(to_free->value);
			free(to_free->key);
			free(to_free);
			to_free = aux;
		}
	}
	free(ht->array);
	free(ht);
}
