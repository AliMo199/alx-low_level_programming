#include <stdio.h>
#include "main.h"

/**
 * main - prints all arg it receives
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
