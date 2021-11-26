#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning
  * of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the new node
  *
  * Return: The new head of the doubly linked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
  {
	dlistint_t *tmp;

	tmp = *head;
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}


