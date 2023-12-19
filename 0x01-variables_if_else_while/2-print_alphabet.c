#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 Always
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
