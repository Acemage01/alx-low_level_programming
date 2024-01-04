#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int val, n, a;

	val = 0;

	while (str[val] != '\0')
	{
		val++;
	}

	if (val % 2 == 0)
	{
		for (a = val / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	} else if (val % 2)
	{
		for (n = (val - 1) / 2; n < val - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
