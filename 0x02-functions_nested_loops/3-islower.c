#include "main.h"

/**
 * main - Checks if a character is lowercase
 *
 *
 * Return: 1 if character is lowercase, 0 if not
 */

int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
	return (1);
	else
	return (0);
}
