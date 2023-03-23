#include "main.h"
/**
 * _isdigit - Check if the char is number
 *
 * @c: parameter
 *
 *Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
	{

	c = c % 10;

	if (c < 0)
		c = -1 * c;

	_putchar('0' + c);

	return (1);
	return (0);
}

