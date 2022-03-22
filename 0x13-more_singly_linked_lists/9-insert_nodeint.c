#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head:
 * @idx:
 * @n:
 * Return:
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *aux = *head;
	listint_t *new;

	new = malloc(sizeof(n));
	if(new)
	{
		new->n = n;
	}
	for (;i < (idx - 1); i++)
	{
		if(!aux)
		{
			return (NULL);
		}
		aux = aux->next;
	}
	new->next = aux->next;
	aux->next = new;
	return (0);

}
