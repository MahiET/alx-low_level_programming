#include "lists.h"

/**
 * print_dlistint - function to print the list
 * @h: The double linked list to prints
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
