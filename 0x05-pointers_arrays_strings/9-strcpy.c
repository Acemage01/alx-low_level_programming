#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int val, a;

	val = 0;

	while (src[val] != '\0')
	{
		val++;
	}

	for (a = 0; a < val; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
