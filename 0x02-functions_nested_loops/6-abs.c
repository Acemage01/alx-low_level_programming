#include "main.h"

/**
 * main - Computes the absolute value of an integer.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int number)
{
	if (number >= 0)
		return (number);
	else
		return (-number);
}
