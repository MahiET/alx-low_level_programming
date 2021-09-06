#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 * main - check the code
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}

