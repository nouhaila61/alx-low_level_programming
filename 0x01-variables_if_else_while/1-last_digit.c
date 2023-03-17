#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Determines if a number is positive, negative or zero
 * Return: 0
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("%d and is greater than 5");
	}
	if (x == 0)
	{
		printf("%d and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("%d and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
