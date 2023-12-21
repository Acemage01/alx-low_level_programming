#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2, separated by a comma followed by a space.
 *
 * Return: 0 always
 */

int main(void)
{
	int num;
	unsigned long sq1 = 0, sq2 = 1, sum;

	for (num = 0; num < 50; num++)
	{
		sum = sq1 + sq2;
		printf("%lu", sum);

		sq1 = sq2;
		sq2 = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
