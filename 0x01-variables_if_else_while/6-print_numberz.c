#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: 0 Always
 */

int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
