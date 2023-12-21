#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, 
 * starting with 1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	unsigned long sq1 = 0, sq2 = 1, sum;
	unsigned long f1_h1, f1_h2, f2_h1, f2_h2;
	unsigned long h1, h2;

	for (num = 0; num < 92; num++)
	{
		sum = sq1 + sq2;
		printf("%lu, ", sum);

		sq1 = sq2;
		sq2 = sum;
	}

	f1_h1 = sq1 / 10000000000;
	f2_h1 = sq2 / 10000000000;
	f1_h2 = sq1 % 10000000000;
	f2_h2 = sq2 % 10000000000;

	for (num = 93; num < 99; num++)
	{
		h1 = f1_h1 + f2_h1;
		h2 = f1_h2 + f2_h2;
		if (f1_h2 + f2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (num != 98)
			printf(", ");

		f1_h1 = f2_h1;
		f1_h2 = f2_h2;
		f2_h1 = h1;
		f2_h2 = h2;
	}
	printf("\n");
	return (0);
}
