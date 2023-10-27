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
 * main - add two positive numbers
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, n, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		n = _atoi(argv[k]);
		if (n >= 0)
		{
			sum += n;
		}
	}

	printf("%d\n", sum);
	return (0);
}
