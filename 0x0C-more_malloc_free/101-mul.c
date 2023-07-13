#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int multiply(int num1, int num2);
int isNumeric(const char *str);

/**
  *multiply - Function to multiply two numbers
  *@num1: the first integer
  *@num2: the second integer
  *Return: multipication of the tw0 integers
  */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
  *isNumeric - function to check if a string
  *            is composed only of digits
  *@str: the string to check
  *Return: 1 on sucess or 0 on failure
  */

int isNumeric(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
  *main - Entry point
  *@argc: the num of arguments
  *@argv: the length of arguments
  *Return: status 98 on success, or Error on failure
  */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
