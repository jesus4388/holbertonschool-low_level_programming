#include "lists.h"
/**
 * free_dlistint - free nodes
 * @head: pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
