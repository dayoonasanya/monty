#include "monty.h"

void _monty_push(stack_t **stack, unsigned int monty_number);

/**
 * _monty_push - function: push element to the top of stack.
 * @stack: pointer to the head of the stack.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */

void _monty_push(stack_t **stack, unsigned int monty_number)
{
	int n, montyj;

	if (!var_s.arg)
	{
		dprintf(2, "L%u: ", monty_number);
		dprintf(2, "usage: push integer\n");
		free_monty_var();
		exit(EXIT_FAILURE);
	}

	for (montyj = 0; var_s.arg[montyj] != '\0'; montyj++)
	{
		if (!isdigit(var_s.arg[montyj]) && var_s.arg[montyj] != '-')
		{
			dprintf(2, "L%u: ", monty_number);
			dprintf(2, "usage: push integer\n");
			free_monty_var();
			exit(EXIT_FAILURE);
		}
	}

	n = atoi(var_s.arg);

	if (var_s.monty_l == 1)
		add_node_int(stack, n);
	else
		add_node_end(stack, n);
}
