#include "function_pointers.h"

/**
 * print_name - writing a function that prints a name
 * @name: string of characters or name to be printed
 * @f: a pointer pointing to a function that prints a name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
