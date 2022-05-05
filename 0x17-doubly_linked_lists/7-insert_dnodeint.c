#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @idx: idx
 * @n: entero
 * @h: head
 * Return: new
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, dlistint_t *aux = *h;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	if (new == NULL)
		return (0);
	if (*h == NULL)
		new = *h;
	else
	{
		for (i = 0; i < idx && aux->next; i++)
			aux = aux->next;
		if (i == idx)
		{
			new->next = aux;
			aux->prev = new;
			*h = new;
		}
		else
			return (0);
	}
	return (new);
}
