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

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; aux; i++)
		aux = aux->next;
	if (i == idx)
		return (add_dnodeint_end(h, n));
	if (idx > i)
		return (NULL);
	if (idx > 0 && *h == NULL)
		return (NULL);
	aux = *h;
	for (i = 0; i < idx && aux->next; i++)
		aux = aux->next;
	if (i == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (new)
		{
			new->n = n;
			new->next = NULL;
			new->prev = NULL;

			aux->prev->next = new;
			new->prev = aux->prev,
			new->next = aux;
			aux->prev = new;
			return (new);
		}
	}
	return (NULL);
}
