#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: charachter string to
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tot, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, tot = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			tot += power;
	}

	return (tot);
}
