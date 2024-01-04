#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: string to return
 *
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int b;

	b = 0;

	while (s[b] != '\0')
	{						                b++;
	}
	return (b);
}
