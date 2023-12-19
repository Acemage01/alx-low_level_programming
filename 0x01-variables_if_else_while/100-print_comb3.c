#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 Always
 */

int main(void)
{
	int d, e;

	for (d = 48; d <= 56; d++)
	{
		for (e = 49; e <= 57; e++)
		{
			if (e > d)
			{
				putchar(d);
				putchar(e);
				if (d != 56 || e != 57)
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
