#include "main.h"

/**
 * _strcat - contactenating 2 strings
 * @dest: destination string
 * @src: source string
 *
 * Return: 0(if successful)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
