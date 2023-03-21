#include "main.h"
/**
 * print_sign -  determine if input is a number
 *
 * @n: parameter
 * Return: 1 if n is greater than zero 0  if n is zero else -1
 *
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

