#include "main.h"

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{

		dest[i] = '\0';
		i++;
	}
	return (dest);
}

