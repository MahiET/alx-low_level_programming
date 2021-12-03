#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: The difference s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
