#include "main.h"

/**
 * print_rev - This ptints a string in reverse + a new line
 * @s: This is the variable that helps me count the string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{}
	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
