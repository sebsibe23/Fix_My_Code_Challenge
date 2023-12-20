#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 *
 * Description: Structure representing a node
 * of a doubly linked list
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 *
 * @head: Pointer to the address of the first element of the list
 * @n: Value to store in the new node
 *
 * Return: Pointer to the newly added node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * delete_dnodeint_at_index - Deletes a node at a specific
 * index from a doubly linked list
 *
 * @head: Pointer to the first element of the list
 * @index: Index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: Pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head);

#endif /* _LISTS_H_ */
