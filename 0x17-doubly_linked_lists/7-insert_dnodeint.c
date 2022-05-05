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
	dlistint_t *new;
	dlistint_t *aux = *h;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	for (i = 0; aux != NULL; i++)
		aux = aux->next;
	aux = *h;
	if (idx == i - 1)
		add_dnodeint_end(h, n);
	if (new == NULL)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
	if (*h == NULL)
		new = *h;
	else
	{
		for (i = 0; i < idx && aux->next; i++)
			aux = aux->next;
		if (i == idx)
		{
			aux->prev->next = new;
			new->prev = aux->prev;
			new->next = aux;
			aux->prev = new;
		}
		else
			return (NULL);
	}
	return (new);
}
