#include <stdio.h>
/**
 * main - prints tha alphabet in lowercase but reversed
 *
 * Return: 0
*/

	int main(void)
{

	char x;

	for (x = 'z'; x >= 'a'; x--)
	putchar (x);

	putchar ('\n');
	return (0);
}
