#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n : parameters
 * Return: sum and if n equal zero return it
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i, sum;

	va_start(arg, n);
	while (n == 0)
	return (0);

	sum = 0;
	for (i = 0; i < n ; i++)
	sum += va_arg(arg, int);

	va_end(arg);
	return (sum);

}
