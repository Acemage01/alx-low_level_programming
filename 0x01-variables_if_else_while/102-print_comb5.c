#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 Always
 */

int main(void)
{
	int d, e;

	for (d = 0; d < 100; d++)
	{
		for (e = 0; e < 100; e++)
		{
			if (d < e)
			{
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				putchar(' ');
				putchar((e / 10) + 48);
				putchar((e % 10) + 48);
				if (d != 98 || e != 99)
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
