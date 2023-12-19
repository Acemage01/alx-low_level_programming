#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 Always
 */

int main(void)
{
	int d, e;

	for (d = 0; n <= 8; d++)
	{
		for (e = 1; e <= 9; e++)
		{
			if (e > d)
			{
				putchar(d);
				putchar(e);
				if (d != 8 || e != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
