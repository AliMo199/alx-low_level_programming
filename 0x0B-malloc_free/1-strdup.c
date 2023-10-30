#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copy string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int n, len;

	n = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[n] = str[n]) != '\0')
		i++;

	return (dup);
}
