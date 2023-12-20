#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point of the program
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;

	/* Add elements to the end of the list */
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);

	/* Print the initial list */
	print_dlistint(head);
	printf("-----------------\n");

	/* Delete nodes at specific indices and print the resulting lists */
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);

	/* Free the memory allocated for the list */
	free_dlistint(head);

	return (0);
}
