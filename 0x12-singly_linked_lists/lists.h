#ifndef nod
#define nod
#include <stdio.h>
#include <stddef.h>
/**
 * struct node - struct
 * @str: char
 * @len: int
 * @next: end
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
