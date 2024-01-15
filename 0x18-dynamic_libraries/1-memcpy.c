#include "main.h"

/**
 * *_memcpy - copies whole memory area
 * @dest: desired memory area
 * @src: area to copy from
 * @n: num. of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
