#include "main.h"

/**
 * _puts_recursion - printing a string followed by a new line
 * @s: The string to print
 *
 * Return: s
 */
void _puts_recursion(char *s);
{
	int i;

	if (i == 0)
	{
		return (0);
	}

	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
