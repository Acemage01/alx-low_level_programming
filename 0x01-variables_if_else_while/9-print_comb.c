#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 Always
 */

int main(void)
{
	int d;

	for (d = 0; n < 10; d++)
	{
		putchar(n);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
