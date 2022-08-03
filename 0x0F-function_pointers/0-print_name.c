#include "function_pointers.h"

/**
 * print_name - writing a function that prints a name
 * @name: string of characters or name to be printed
 * @f: function pointer that takes a string arguement
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
