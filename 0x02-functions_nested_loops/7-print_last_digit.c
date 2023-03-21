#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: parameter
 *
 *Return:  the value of the last digit
 */
int print_last_digit(int n)
{

	n = n % 10;
	if (n < 0)
	{
		_putchar(n * -1);
	}
	else
		_putchar('0' + n);

		return (n);
}

