#include <stdio.h>
#include "main.h"

/**
 * main - print number of arg passed to program
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
