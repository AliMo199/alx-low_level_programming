#include "main.h"

/**
 * leet - encodes a string in 1337 format
 * @s: string to encode
 *
 * Return: resulting string;
 */
char *leet(char *s)
{
	int i, j;

	char *a1 = "aAeEoOtTlL";
	char *b1 = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a1[j])
			{
				s[i] = b1[j];
			}
		}
	}

	return (s);
}
