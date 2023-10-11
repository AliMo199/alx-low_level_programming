#include"main.h"

/**
 * largest_number - returns the largest of 3 numbers
 *
 * @n1: first integer
 * @n2: second integer
 * @n3: third integer
 *
 * Return: largest number
 */

int largest_number(int n1, int n2, int n3)
{
	int largest;

	if (n1 >= n2 && n1 >= n3)
	{
		largest = n1;
	}
	else if (n2 >= n1 && n2 >= n3)
	{
		largest = n2;
	}
	else
	{
		largest = n3;
	}

	return (largest);
}
