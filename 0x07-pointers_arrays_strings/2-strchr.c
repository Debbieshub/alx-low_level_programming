#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string of characters
 * @c: character variable to locate
 *
 * Return: pointer to the first occurrenv]ce of the character c in the string
 * Or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}
}
