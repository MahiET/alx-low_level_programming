#include "lists.h"
/**
  * *get_dnodeint_at_index - Locates a node in a dlistint_t list.
  * @head: pointer to the beginning of the list
  * @index: index to get
  * Return:  A pointer to node if found, or NULL in otherwise
  */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
  unsigned int a;

	for (a = 0; head != NULL && a < index; a++)
	{
	  if (head == NULL)
	    return (NULL);
		head = head->next;
	}
	return (head);
}
