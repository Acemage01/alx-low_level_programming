#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */

char *argstostr(int ac, char **av)
{
	int m, n, o, size;
	char *arg;

	size = 0;
	o = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	m = 0;
	while (m < ac)
	{
		n = 0;
		while (av[m][n])
		{
			size++;
			n++;
		}
		size++;
		m++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	m = 0;
	while (m < ac)
	{
		n = 0;
		while (av[m][n])
		{
			arg[o] = av[m][n];
			n++;
			o++;
		}
		arg[o] = '\n';
		o++;
		m++;
	}
	arg[o] = '\0';
	return (arg);
}
