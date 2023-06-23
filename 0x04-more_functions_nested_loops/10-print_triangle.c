#include "main.h"
/**
  *print_triangle - function that prints a triangle
  *@size: The size of the triangle
  */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, m;

		for (i = 1; i <= size; i++)
		{
			for (m = i; m < size; m++)
			{
				_putchar(' ');
			}

			for (m = 1; m <= i; m++)
			{
			_putchar('#');
			}

			_putchar('\n');
		}
	}
}
