#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator between strings
 * @n: number of inputs
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	char *str;

	va_list list;

	va_start(list, n);

	for (b = 0; b < n; b++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && b == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	va_end(list);

	printf("\n");
}
