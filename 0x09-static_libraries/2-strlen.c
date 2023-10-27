#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
