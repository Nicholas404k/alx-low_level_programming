#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  *print_strings - function that prints strings
  *@separator: the str to be printed between the strings
  *@n: the number of strings passed to the func
  *@...:the var number of strings to be printed
  *Return: strings or If separator is NULL, don’t print it
  *       If one of the string is NULL, print (nil) instead
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	const char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, const char*);

		if (str == NULL)
			printf("(nil");

		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
