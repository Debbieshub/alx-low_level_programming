#include "main.h"

/**
 * jack_bauer - prints all minutes of the day jack bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h <= 23)
	{
		while (m = 59)
		{
			_putchar(h);
			h++;
		}
		_putchar(m);
		m++;
	}
	_putchar('\n');
}
