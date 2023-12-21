#include"main.h"

/**
 * print_to_98 - print n to 98 counts separated by comma,
 * followed by space and number should be printed in order
 *@n: number to input
*/

void print_to_98(int n)
{
	int number;

	if (n > 98)
		for (number = n; number > 98; --number)
			printf("%d, ", number);
	else
		for (number = n; number < 98; ++number)
			printf("%d, ", number);
	printf("98\n");
}
