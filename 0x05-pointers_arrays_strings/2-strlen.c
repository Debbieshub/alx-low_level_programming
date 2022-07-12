#include "main.h"

/**
 * _strlen - returning the length of a string
 * @s: The variable for counting string
 *
 * Return: 0(succesful)
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
