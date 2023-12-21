#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Return 0 Always
 */
void print_alphabet(void)

{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	_putchar(alpha);

	_putchar('\n');
}
