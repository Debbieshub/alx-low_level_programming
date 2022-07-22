#include "main.h"

/**
 * _strcat - contactenating 2 strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: 2 contactenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j]; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
