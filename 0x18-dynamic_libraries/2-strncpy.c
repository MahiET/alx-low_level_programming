#include "holberton.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: an input integer
 *main - check the code
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
  int srclen = 0, i = 0;
  char *temp = dest, *start = src;

  while (*src)
    {
      srclen++;
      src++;
    }

  srclen++;

  if (n > srclen)
    n = srclen;

  src = start;

  for (; i < n; i++)
    *dest++ = *src++;

  return (temp);
}
