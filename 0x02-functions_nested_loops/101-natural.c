#include "main.h"
#include <stdio.h>

/**
  *main - function that calculates the sum of all
  *                the multiples of 3 or 5 below 1024
  *Return: always 0
  */

int main(void)
{
	int multiples_sum = 0;
	int num;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			multiples_sum += num;
		}
	}
	printf("%d\n", multiples_sum);

	return (0);
}
