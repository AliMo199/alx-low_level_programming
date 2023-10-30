#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenate all arguments of program.
  *@ac: argument count.
  *@av: pointer to array.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i, j, n, size;
	char *arg;

	size = 0;
	n = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[n] = av[i][j];
			j++;
			n++;
		}
		arg[n] = '\n';
		n++;
		i++;
	}
	arg[n] = '\0';
	return (arg);
}
