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
			printf("%c%s", va_arg(arg, char), separator);
			else if (va_arg(arg, char *) == NULL)
			printf("(nil");
		else
			printf("%c", va_arg(arg, char));
	}
	va_end(arg);
	printf("\n");
}
z