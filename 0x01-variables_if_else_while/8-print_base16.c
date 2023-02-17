#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char alphabet;
	for (number = 0; number < 10; number++)
        {
                putchar(number);
        }
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
