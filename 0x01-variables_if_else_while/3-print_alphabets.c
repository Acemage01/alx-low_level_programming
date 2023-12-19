#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: 0 Always
 */

int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	for (al = 'A'; al <= 'Z'; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
