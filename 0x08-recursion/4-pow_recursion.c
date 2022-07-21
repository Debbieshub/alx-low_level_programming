#include "main.h"

/**
 * _pow_recursion - retuen the value of x to the power of y
 * @x: integer
 * @y: number to which x wi;ll be powered to
 *
 * Return: x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
