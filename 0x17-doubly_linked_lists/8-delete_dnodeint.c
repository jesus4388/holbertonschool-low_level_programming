#include "lists.h"
/**
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, n = 0;
	dlistint_t *aux = *head;

	if (*head)
	{
		n = dlistint_len(*head);
		if (index == n)
		{	
			while (aux->next)
			{
				aux = aux->next;
			}
			aux->prev->next = NULL;
			free(aux);
		}
		for (i = 0; i < index && aux->next; i++)
        	{
			aux = aux->next;
		}
		if (index == 0)
		{
			*head = (*head)->next;
			aux->prev = NULL;
			aux->next = NULL;
			free(aux);
		}
		if(index == i && aux->next)
		{	
			aux->prev->next = aux->next;
			aux->next->prev = aux->prev;
			free(aux);
		}
	}
	else
		return(-1);
	return(1);
}
