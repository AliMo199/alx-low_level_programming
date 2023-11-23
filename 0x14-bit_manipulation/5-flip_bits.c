#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another
 * @n: first num
 * @m: second num to convert
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff1;
	int count;

	diff1 = n ^ m;
	count = 0;

	while (diff1)
	{
		count++;
		diff1 &= (diff1 - 1);
	}

	return (count);
}
