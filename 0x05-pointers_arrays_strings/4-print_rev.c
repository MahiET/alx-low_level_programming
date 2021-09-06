#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 * main - check the code
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
