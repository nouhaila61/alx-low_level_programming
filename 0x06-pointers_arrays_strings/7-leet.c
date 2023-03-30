#include "main.h"

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
		while (letters[j])
		{
			if (str[i] == letters[j])
			{
				str[i] = leet[j / 2] + 48;
			}
			j++;
		}
		i++;
	}
	return (str);
}

