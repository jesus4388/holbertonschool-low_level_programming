#include "lists.h"
/**
 * delete_dnodeint_at_index - delete_dnodeint_at_index
 * @head: pointer
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux = NULL;

	if (*head)
	{
		aux = *head;
		for (i = 0; i < index && (*head)->next; i++)
		{
			aux = aux->next;
		}
		if (index == i)
		{
			if (index == 0)
				*head = (*head)->next;
			if (aux->prev != NULL)
				aux->prev->next = aux->next;
			if (aux->next != NULL)		
				aux->next->prev = aux->prev;
			aux->next = NULL;
			aux->prev = NULL;
			free(aux);
			return(1);
		}
	}
	return (-1);
}
