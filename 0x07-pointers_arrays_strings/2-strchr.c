#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locate character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to the first occurrence of character
 * c in the string s, or NULL if character not found
 */
char *_strchr(char *s, char c)
{
		int n;

		while (1)
		{
			n = *s++;
			if (n == c)
			{
				return (s - 1);
			}
			if (n == 0)
			{
				return (NULL);
			}
		}
}
