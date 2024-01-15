#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the copy string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i1;

	i1 = 0;

	while (src[i1] != '\0' && i1 < n)
	{
		dest[i1] = src[i1];
		i1++;
	}

	while (i1 < n)
	{
		dest[i1] = '\0';
		i1++;
	}

	return (dest);
}
