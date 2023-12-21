#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 * Return: 0 Always
 *
*/

void print_alphabet_x10(void)
{
	int print, alpha;

	for (print = 0; print <= 9; print++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
