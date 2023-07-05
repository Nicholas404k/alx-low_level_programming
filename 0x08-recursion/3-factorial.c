#include "main.h"
/**
  *factorial - function that returns the factorial of a given number
  *if n is lower than 0
  *the function should return -1 to indicate an error
  *@n: the given number
  *Return: factorial n
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
