#include "main.h"
/**
  *more_numbers - a function that prints 10 times the numbers, from 0 to 14
  */

void more_numbers(void)
{
	int n;
	int m;

	for (n = 1; n <= 0; n++)
	{
		for (m = 1; m <= 14; m++)
		{
			if (m >= 10)
				_putchar('1');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
