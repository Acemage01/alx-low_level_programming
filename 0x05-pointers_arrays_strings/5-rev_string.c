#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 */

void rev_string(char *s)

{
	char fun;
	int a, val1, val2;

	val1 = 0;
	val2 = 0;

	while (s[val1] != '\0')
	{
		val2++;
	}

	val2 = val1 - 1;

	for (a = 0; a < val1 / 2; a++)
	{
		fun = s[a];
		s[a] = s[val2];
		s[val2--] = fun;
	}
}
