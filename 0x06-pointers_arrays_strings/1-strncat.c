#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 *
 * Return: a pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i1, j1;

	i1 = 0;
	j1 = 0;

	while (dest[i1] != '\0')
		i1++;

	while (src[j1] != '\0' && j1 < n)
	{
		dest[i1] = src[j1];
		i1++;
		j1++;
	}

	dest[i1] = '\0';

	return (dest);
}
