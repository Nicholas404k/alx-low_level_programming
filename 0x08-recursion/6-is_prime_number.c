#include "main.h"

int real_prime(int n, int i);

/**
  *is_prime_number - function that returns 1
  *if the input integer is a prime number
  *otherwise return 0
  *@n: the number to get the prime number of
  *Return: 1 if n is a prime number, 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
  *real_prime - calculates if a number is prime
  *@n: the number to calculate
  *@i:the iterator
  *Return: 1 if n is prime, 0 if not
  */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
