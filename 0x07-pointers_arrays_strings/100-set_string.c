#include "main.h"

/**
 * set_string - set value of pointer to char
 * @s: pointer to pointer  needed to set to
 * @to: string being set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
