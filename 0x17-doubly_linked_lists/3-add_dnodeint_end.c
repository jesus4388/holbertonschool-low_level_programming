#include "lists.h"
/**
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	else
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		new->prev = aux;
		aux->next = new;
		aux = new;
	}
	return (new);
}
