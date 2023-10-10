#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n1: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n1)
{
	int n2;

	if (n1 < 0)
		n1 = -n1;

	n2 = n1 % 10;

	if (n2 < 0)
		n2 = -n2;

	_putchar(n2 + '0');

	return (n2);
}
