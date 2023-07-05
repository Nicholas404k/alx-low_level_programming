#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
  *_sqrt_recursion -  function that returns 1
  *If n does not have a natural square root
  *@n: the integer
  *Return: square root of the integer
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
  *real_sqrt_recursion - find the natural
  *square root of a number
  *@n: the number evaluate the sqrt of
  *@i: the iterator
  *Return: result of square root
  */

int real_sqrt_recursion(int n, int i)
		{
			if (i * i > n)
				return (-1);
			if (i * i == n)
				return (i);
			return (real_sqrt_recursion(n, i + 1));
		}
