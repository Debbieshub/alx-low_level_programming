#include "main.h"

/**
 * _strchr - locating a character in a string
 * @s: string of characters
 * @c: character variable to search
 *
 * Return: pointer to the first occurence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);
	}
}
