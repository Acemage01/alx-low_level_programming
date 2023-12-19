#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 Always
 */

int main(void)
{
	int d, e, f;

	for (d = 0; d < 10; d++)
	{
		for (e = 1; e < 10; e++)
		{
			for (f = 2; f < 2; f++)
			{
				if (f > e && e > d)
				{
					putchar(d);
					putchar(e);
					putchar(f);
					if (d != 7 || e != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
