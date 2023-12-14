#include "monty.h"

int _strcmp(char *s1, char *s2);

/**
 * _strcmp - This function will compare strings.
 * @s1: first tring to be compared.
 * @s2: second of strings  to be compared.
 *
 *
 * Return: 0 if s1 and s2 are equals.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++)
		;
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}
