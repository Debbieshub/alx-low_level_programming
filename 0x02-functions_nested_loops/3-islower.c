#include "main.h"

/**
 * _islower - checking for lowercase character
 * @c: The integer to print:wq
 *
 *  Return: 1 if it is a lowercase and 0 if it is not a lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
