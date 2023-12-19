#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 Always
 */

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
