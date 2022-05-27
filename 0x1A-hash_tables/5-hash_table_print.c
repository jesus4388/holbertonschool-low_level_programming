#include "hash_tables.h"
/**
 * hash_table_print - hash_table_print
 * @ht: ht
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while(aux)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			flag = 1;
		}
	}
	printf("}\n");
}
