#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocating memory for an array using malloc
 * @nmemb: unsigned int type
 * @size: unsigned int type
 *
 * Return: return pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < (nmemb * size); count++)
		ptr[count] = 0;
	{
		return (ptr);
	}
}
