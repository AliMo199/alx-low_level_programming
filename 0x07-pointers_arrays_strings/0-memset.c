#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: memory area filled
 * @b: char to copy
 * @n: number of times to copy the char
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
