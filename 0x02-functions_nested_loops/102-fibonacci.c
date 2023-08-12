#include "main.h"
#include <stdio.h>
/**
  *main - function that prints first 50 Fibonacci numbers,
  *      starting with 1 and 2 separated by a comma
  *     followed by a space
  *Return: always 0
  */

int main(void)
{
	int fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 50; i++)
	{
		printf("%d", fib[i]);

		if (i != 49)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
