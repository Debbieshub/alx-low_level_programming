#include "main.h"

/**
 * _print_rev_recursion - Printing a string in reverse
 * @s: String to be printed
 *
 * Return: 0(if success)
 */

void _print_rev_recursion(char *s)
{
	char s[];
	{
	_print_rev_recursion(s);
	_putchar('\n');
	}
	return (0);
}

void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

