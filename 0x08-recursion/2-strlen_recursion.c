#include "main.h"

/**
 * _strlen_recursion - returning the length of a string
 * @s: length of string to be returned
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	{
		i = 1 + _strlen_recursion(s + 1);
	}

		return (i);
}
