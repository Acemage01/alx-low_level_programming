#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string to print the chars from
 */

void puts2(char *str)
{
	int val, a;

	val = 0;

	while (str[val] != '\0')
	{
		val++;
	}

	for (a = 0; a < val; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
