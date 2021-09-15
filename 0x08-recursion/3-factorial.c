#include "main.h"

/**
 * factorial - a function that returns the factorial of a number.
 * @n: An input integer
 * main - check the code
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
