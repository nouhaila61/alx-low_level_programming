#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: str
 **/

char *leet(char *str)
{
	int i = 0, j = 0;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

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
		j = 0;
		i++;
	}
	return (str);
}

