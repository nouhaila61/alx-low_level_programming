#include "main.h"

/**
  * print_square - prints a square
  * @size: The number of lines to draw
  * Return: empty
  */
void print_square(int size)
{

	if (size <= 0)

		_putchar('\n');

	int x, y;
		for (x = 0; x < size; x++)
		{
		for (y = 0; y < size; y++)
{
		_putchar(35);
}
	_putchar('\n');
		}
}

