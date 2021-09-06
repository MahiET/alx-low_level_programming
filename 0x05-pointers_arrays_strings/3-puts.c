#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string to print.
 * main - check the code
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
