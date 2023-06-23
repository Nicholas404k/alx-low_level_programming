#include "main.h"
/**
  *print_diagonal - function that draws a diagonal line on the terminal
  *@n: The input as an integer
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, m;

		for (i = 0; i < n; i++)
		{
			for (m = 0; m < n; m++)
			{
				if (m == i)
					_putchar('\\');
				else if (m < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
