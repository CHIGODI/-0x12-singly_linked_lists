#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list_t list
 * @head: pointer to first node
 *
 * Return: void
 *
 */
void free_list(list_t *head)
{
	free(head);
}
