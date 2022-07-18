#include "main.h"

/**
 * _memset - fills the memory area with a constant byte
 * @n: number of bytes
 * @b: the constant byte
 * @s: memory area to be pointed to
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
