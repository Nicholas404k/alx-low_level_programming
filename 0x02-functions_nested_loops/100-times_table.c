#include "main.h"
#include <stdio.h>
/**
  *print_times_table - function that prints the n times
  *                   table, starting with 0
  *@n: the integer to print the times table of
  *Return: the product of n
  */

void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			printf("%4d", product);
		}

		printf("\n");
	}
}
