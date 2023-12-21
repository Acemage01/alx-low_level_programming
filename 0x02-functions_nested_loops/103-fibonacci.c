#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence terms not exceeding 4000000.
 *
 * Return: 0 Always
 */

int main(void)
{
	unsigned long sq1 = 0, sq2 = 1, sqsum;
	float total;

	while (1)
	{
		sqsum = sq1 + sq2;
		if (sqsum > 4000000)
			break;

		if ((squm % 2) == 0)
			total += sqsum;

		sq1 = sq2;
		sq2 = sqsum;
	}
	printf("%.0f\n", total);

	return (0);
}
