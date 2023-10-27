#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int n1, n2;

	n1 = 0;
	n2 = 0;

	while (dest[n1] != '\0')
		n1++;

	while (src[n2] != '\0')
	{
		dest[n1] = src[n2];
		n2++;
		n1++;
	}

	dest[n1] = '\0';

	return (dest);
}
