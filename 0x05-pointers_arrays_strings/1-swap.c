#include "main.h"

/**
 * swap_int - swapping the values of two integers
 * @a: Integer 1
 * @b: Integer 2
 *
 * Return: 0(success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
