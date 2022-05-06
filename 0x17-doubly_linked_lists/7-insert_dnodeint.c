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
	
		if (new == NULL)
			return (NULL);
		if (*h == NULL)
		{
			new = *h;
			return (new);
		}
		for (i = 0; i < idx && aux->next; i++)
			aux = aux->next;
		if (i == idx)
		{
			if (aux->prev)
			{
				aux->prev->next = new;
				new->prev = aux->next;
			}
			else
				add_dnodeint(h, n);
			if (aux->next)
			{
				aux->next->prev = new;
				new->next = aux;
			}
			else
				add_dnodeint_end(h, n);
		}
		return (new);
	}
	return (NULL);
}
