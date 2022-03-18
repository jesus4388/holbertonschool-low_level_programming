#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: head list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux = head;
	list_t *tofree;

	for (; aux;)
	{
		tofree = aux;
		aux = aux->next;
		free(tofree->str);
		free(tofree);
	}
}
