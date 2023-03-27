#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @str: the string
 */

void print_rev(char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	_putchar(str[i]);

	_putchar('\n');
}

