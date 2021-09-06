#include "main.h"

/**
 * main - check the code
 *
 * @a: First value to swap.
 *
 * @b: Second value to swap.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

