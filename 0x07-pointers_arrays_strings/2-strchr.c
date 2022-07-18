#include "main.h"

/**
 * _strchr - locating a character in a string
 * @s: string of characters
 * @c: character variable to search
 * Return: pointer to the first occurence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)

	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
