#include "main.h"
#include <stdio.h>
/**
  *main - function that finds and prints the sum of the
  *      even-valued terms followed by a new line
  *Return: always 0
  */

int main(void)
{
	int limit = 4000000;
	int previousTerm = 1;
	int currentTerm = 2;
	int sum = 0;
	int nextTerm;

	while (currentTerm <= limit)
	{
		if (currentTerm % 2 == 0)
		{
			sum += currentTerm;
		}

		nextTerm = previousTerm + currentTerm;
		previousTerm = currentTerm;
		currentTerm = nextTerm;
	}

	printf("%d\n", sum);

	return (0);
}
