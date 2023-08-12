#include "main.h"
#include <stdio.h>
/**
  *main - function that prints the
  *       Fibonacci numbers up to a given count
  *Return: always 0
  */

int main(void)
{
	int count = 98;
	int first = 1;
	int second = 2;
	int i;
	int next;

	printf("%d",first);
	printf(", %d", second);

	for (i = 3; i <= count; i++)
	{
		next = first + second;

		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
