#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void);
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
