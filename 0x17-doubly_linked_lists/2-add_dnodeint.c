#include "lists.h"
/**
 * add_dnodeint - add node
 * @n: entero
 * @head: head
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = *head;
		new->prev = *head;
		*head = new;
	}
	else
		return (NULL);
	return (new);
}
