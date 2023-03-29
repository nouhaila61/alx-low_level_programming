#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: the final result in dest
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;
	int j = n - 1;


	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}

