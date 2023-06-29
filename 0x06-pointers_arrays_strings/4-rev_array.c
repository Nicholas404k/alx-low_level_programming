#include "main.h"
/**
  *reverse_array - function that reverses the content of an array of integers
  *Where n is the number of elements of the array
  *@a: the array
  *@n: the number of elements of array
  */

void reverse_array(int *a, int n)
{
	int i;
	int s;

	for (i = 0; i < n--; i++)
	{
		s = a[i];
		a[i] = a[n];
		a[n] = s;
	}
}
