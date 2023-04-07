#include "main.h"
#include <stdlib.h>
/**
 * main - Write a program that adds positive numbers
 * @argc: count the number of argruments.
 * @argv: Pinter to the string of arguments.
 * Return: 0.
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0 && atoi(argv[i]) < 9)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

