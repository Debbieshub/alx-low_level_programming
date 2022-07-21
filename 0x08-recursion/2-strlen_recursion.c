#include "main.h"

/**
 * _strlen_recursion - returning the length of a string
 * @s: length of string to be returned
 *
 * Return: 0(successful)
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s[count] != '\0')
	{
		count++;
	}
	return (count);
}
