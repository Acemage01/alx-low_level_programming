#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of inputs
 */

void print_all(const char * const format, ...)
{
	int b = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[b])
		{
			switch (format[b])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					b++;
					continue;
			}
			sep = ", ";
			b++;
		}
	}

	va_end(list);

	printf("\n");
}
