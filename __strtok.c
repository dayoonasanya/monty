#include "monty.h"

char *_strtok(char *s, char *d);

/**
 * _strtok - function: tokenize strings.
 * @s: string.
 * @d: delim.
 *
 * Return: return part.
 */
char *_strtok(char *s, char *d)
{
	static char *ultimo;
	int monti = 0, montj = 0;

	if (!s)
		s = ultimo;
	while (s[monti] != '\0')
	{
		if (monty_sch(d, s[monti]) == 0 && s[monti + 1] == '\0')
		{
			ultimo = s + monti + 1;
			*ultimo = '\0';
			s = s + montj;
			return (s);
		}
		else if (monty_sch(d, s[monti]) == 0 && monty_sch(d, s[monti + 1]) == 0)
			monti++;
		else if (monty_sch(d, s[monti]) == 0 && monty_sch(d, s[monti + 1]) == 1)
		{
			ultimo = s + monti + 1;
			*ultimo = '\0';
			ultimo++;
			s = s + montj;
			return (s);
		}
		else if (monty_sch(d, s[monti]) == 1)
		{
			montj++;
			monti++;
		}
	}
	return (NULL);
}
