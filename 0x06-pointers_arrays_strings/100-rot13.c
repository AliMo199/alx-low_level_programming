#include "main.h"

/**
 * rot13 - encodes string in rot13 format
 * @s: string to encode
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;

	char r1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; r1[j] != '\0'; j++)
		{
			if (s[i] == r1[j])
			{
				s[i] = r2[j];
				break;
			}
		}
	}

	return (s);
}
