#include "monty.h"

void _monty_pint(stack_t **stack, unsigned int monty_number);

/**
 * _monty_pint - function: prints the value at the top of monty stack.
 * @stack: head pointer to the stack.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */

void _monty_pint(stack_t **stack, unsigned int monty_number)
{
	(void)monty_number;

	if (*stack == NULL)
	{
		dprintf(2, "L%u: ", monty_number);
		dprintf(2, "can't pint, stack empty\n");
		free_monty_var();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
