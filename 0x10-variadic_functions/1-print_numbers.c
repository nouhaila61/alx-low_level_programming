#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: seperator of the string
 * @n: parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n && separator != NULL)
			printf("%d%s", va_arg(arg, int), separator);
		else
			printf("%d", va_arg(arg, int));
	}
	va_end(arg);
	printf("\n");
}
