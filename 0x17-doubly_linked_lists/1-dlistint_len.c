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
