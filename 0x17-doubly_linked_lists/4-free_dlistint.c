#include "lists.h"
/**
 * free_dlistint - free nodes
 * @head: pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
