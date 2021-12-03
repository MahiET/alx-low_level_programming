#include "main.h"

/**
 * _memcpy - a function that copys memory area
 * @dest: pointer to destination memory area
 * @src: memory area source to copy from
 * @n: number of bytes to copy
 * Return:  pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
