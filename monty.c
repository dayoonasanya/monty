#include "monty.h"

int main(int argc, char *argv[]);

/**
 * main - This will be the main function for monty.
 * @argc: [pointer] argument count.
 * @argv: [pointer] argument vector.
 *
 * Return: return success when 0.
 */
int main(int argc, char *argv[])
{
	void (*f)(stack_t **stack, unsigned int line_number);
	FILE *fs;
	ssize_t montylines = 0;
	size_t size = 256;
	char *lines[2] = {NULL, NULL};

	fs = check_input(argc, argv);
	start_monty_var(fs);
	montylines = getline(&var_s.buffer, &size, fs);
	while (montylines != -1)
	{
		lines[0] = _strtok(var_s.buffer, " \t\n");
		if (lines[0] && lines[0][0] != '#')
		{
			f = get_opcode_func(lines[0]);
			if (!f)
			{
				dprintf(2, "L%u: ", var_s.monty_cont);
				dprintf(2, "unknown instruction %s\n", lines[0]);
				free_monty_var();
				exit(EXIT_FAILURE);
			}
			var_s.arg = _strtok(NULL, " \t\n");
			f(&var_s.head, var_s.monty_cont);
		}
		montylines = getline(&var_s.buffer, &size, fs);
		var_s.monty_cont++;
	}

	free_monty_var();

	return (0);
}
