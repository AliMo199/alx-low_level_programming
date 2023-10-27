#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 *
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int i, d, n, len, a, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	a = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && a == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			a = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			a = 0;
		}
		i++;
	}

	if (a == 0)
		return (0);

	return (n);
}

/**
 * main - multiply two numbers
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
