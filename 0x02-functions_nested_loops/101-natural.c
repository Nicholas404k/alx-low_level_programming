#include "main.h"
#include <stdio.h>

int calculate_sum(void);

/**
  *calculate_sum - function that calculates the sum of all
  *                the multiples of 3 or 5 below 1024
  *Return: always 0
  */

int calculate_sum(void)
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
	return (multiples_sum);
}
