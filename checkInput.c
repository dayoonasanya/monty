#include "monty.h"

FILE *check_input(int argc, char *argv[]);

/**
 * check_input - check the input for monty stack.
 * @argc: argument count [pointer].
 * @argv: [pointer] argument vector.
 *
 * Return: return file input.
 */
FILE *check_input(int argc, char *argv[])
{
	FILE *fs;

	if (argc == 1 || argc > 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fs = fopen(argv[1], "r");

	if (fs == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	return (fs);
}
