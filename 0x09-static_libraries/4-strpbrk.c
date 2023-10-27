#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for a set of bytes
 * @s: string to evaluate
 * @accept: string containing the bytes to look for
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 * or NULL if byte is not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
