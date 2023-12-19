#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0 Always
 */

int main(void)
{
	int d;
	char al;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
