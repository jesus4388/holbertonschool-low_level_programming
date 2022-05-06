#include "lists.h"
/**
 * dlistint_len - len
 * @h: head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
/**
 * delete_dnodeint_at_index - delete_dnodeint_at_index
 * @head: pointer
 * @index: index
 * Return: 1 or -1
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
		if (index == i && aux->next)
		{
			aux->prev->next = aux->next;
			aux->next->prev = aux->prev;
			free(aux);
		}
	}
	else
		return (-1);
	return (1);
}
