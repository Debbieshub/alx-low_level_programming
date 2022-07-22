#include "main.h"

/**
 * _memcpy - copying memory area
 * @src: content to copy from
 * @dest: destination to copy to
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
