#include "main.h"
/**
  *_abs - a function that computes the absolute value of an integer
  *@n: The input number as an integer
  *Return: absolute value
  */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	else
	{
		return (n * -1);
	}
}
