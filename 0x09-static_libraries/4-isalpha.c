#include "main.h"

/**
 * _isalpha - to check for alphabet character
 *
 * @c: The integer to print
 *
 * Return: 1 if it is a letter, a lowercase or uppercase
 * 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
