#include "lists.h"
/**
 * get_dnodeint_at_index - index
 * @head: pointer
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux = head;

	if (index)
	{
		for (i = 0; i < index; i++)
			aux = aux->next;
		return (aux);
	}
	else
		return (NULL);
}

