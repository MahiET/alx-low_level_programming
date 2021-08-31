#include "holberton.h"
/**
 * main - check the code for ALX School students.
 * @n: digit to find the last place of.
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
