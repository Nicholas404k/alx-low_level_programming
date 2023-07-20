#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_numbers - function that prints numbers
  *@separator: the str to be printed
  *@n: the number of integers
  *Return: numbers of If separator is NULL, don’t print it
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int number;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(numbers, int);

		printf("%d", number);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(numbers);

	printf("\n");
}
