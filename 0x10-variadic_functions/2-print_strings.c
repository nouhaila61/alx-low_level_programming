#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator of the string
 * @n: parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n && separator != NULL)
			printf("%c%s", va_arg(arg, int), separator);
		else
			printf("%c", va_arg(arg, int));
	}
	va_end(arg);
	printf("\n");
}
