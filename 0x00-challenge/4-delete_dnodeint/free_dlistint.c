#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: A pointer to the first element of the list
 *
 * Description: This function frees the memory allocate
 *		for a doubly linked list.
 *              It iterates through the list,
 *              starting from the head, and frees each node.
 *              The function does not return anything.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
