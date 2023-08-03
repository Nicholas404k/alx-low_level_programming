#include "main.h"
/**
  *print_binary - function that prints the binary
  *              representation of a number
  *
  *@n: the number where the binary representation printed from
  *Return: always 0
  */

void print_binary(unsigned long int n)
{
	unsigned long int m;
	int i;
	int count = 0;

	for (i = 63; i >= 0; i--)
	{
		m = n >> i;

		if (m & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}
