#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a])
		a++;

	dest[a] = ' ';
	while (src[b] && j < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}

