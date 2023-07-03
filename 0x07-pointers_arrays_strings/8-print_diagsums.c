#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - function that prints the sum of
  *the two diagonals of a square matrix of integers
  *@a: the input
  *@size: the input
  *return: always 0
  */

void print_diagsums(int *a, int size)
{
	int result1, result2, m;

	result1 = 0;
	result2 = 0;

	for (m = 0; m < size ; m++)
	{
		result1 = result1 + a[m * size + m];
	}

	for (m = size - 1; m >= 0; m--)
	{
		result2 += a[m * size + (size - m - 1)];
	}

	printf("%d, %d\n", result1,  result2);
}
