#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: pointer
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux1 = *head;
	listint_t *aux2;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux1);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (!aux1)
			return (-1);
		aux1 = aux1->next;
	}
	aux2 = aux1->next;
	aux1->next = aux2->next;
	free(aux2);
	return (1);
}
