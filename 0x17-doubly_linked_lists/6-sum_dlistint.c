#include "lists.h"

/**
 * sum_dlistint - A function that sums The elements in the list
 * @head: ptr to the beginning of the list
 * Return: The sum of all elements in the list, or 0 if list is NULL
 */

 int sum_dlistint(dlistint_t *head)
 {

     int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum = sum + head->n;
	return (sum);
}
