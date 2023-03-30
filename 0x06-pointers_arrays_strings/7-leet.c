#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: the pointer to dest
 **/

char *leet(char *str)
{
	int i, j = 0;
	char leet[] = {4, 3, 0, 7, 1};
	char letters[] = "aAeEoOtTlL";

	while (str[i])
	{
		while (j < 10)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

