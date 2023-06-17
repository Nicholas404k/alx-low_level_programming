#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Prints all possible combinations of single-digit numbers'
  *Return: always 0
  */

int main(void)
{
	int n;

	for (n = 48; n <= 37; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
