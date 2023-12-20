#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list of integers
 *
 * @h: A pointer to the first element of the list
 *
 * Return: The number of elements printed
 *
 * Description: This function iterates through the
 * doubly linked list starting from
 *              the given head pointer and prints
 *              the value of each node. It also
 *              counts the number of elements printed
 *              and returns that count.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
