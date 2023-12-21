#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 *
 * @alpha: character to be checked
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 if not
 */

int _isalpha(int alpha)
{
	if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
	return (1);
	else
	return (0);
}
