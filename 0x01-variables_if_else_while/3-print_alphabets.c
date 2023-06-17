#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print upper and lowercase alphabets'
  *Return: always 0
  */
int main(void)
{
	int c = 97;
	int d = 65;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	while (d <= 90)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

