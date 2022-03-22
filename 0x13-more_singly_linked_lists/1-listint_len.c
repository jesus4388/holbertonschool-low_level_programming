#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked
 * @h: pointer
 * Return: i
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
