#include "holberton.h"

/**
 * more_numbers - prints digits 0-14 10 times
 *
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i += 1)
	{
		for (j = 0; j <= 14; j += 1)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
