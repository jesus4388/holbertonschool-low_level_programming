#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer
 * @index: is the index of the node
 * Return: nth or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux = head;

	for (; aux; i++)
		aux = aux->next;

	if (index > i)
		return (NULL);

	aux = head;
	for (i = 0; i < index; i++)
	{
		aux = aux->next;
	}
	if (aux == NULL)
		return (NULL);
	else
		return (aux);
}
