#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = '0'; j <= '1'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

