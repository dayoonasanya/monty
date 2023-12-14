#include "monty.h"

int monty_sch(char *s, char c);

/**
 * monty_sch - This function will search for char in str.
 * @s: revied string in monty.
 * @c: sort after character.
 *
 * Return: returns success or not.
 */

int monty_sch(char *s, char c)
{
	int sch = 0;

	while (s[sch] != '\0')
	{
		if (s[sch] == c)
		{
			break;
		}
		sch++;
	}
	if (s[sch] == c)
		return (1);
	else
		return (0);
}
