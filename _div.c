#include "monty.h"

void _monty_div(stack_t **stack, unsigned int monty_number);

/**
 * _monty_div - performs division of monty stack elemets.
 * @stack: head of the monty stack.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */

void _monty_div(stack_t **stack, unsigned int monty_number)
{
	int monty_m = 0;
	stack_t *aux = NULL;

	aux = *stack;

	for (; aux != NULL; aux = aux->next, monty_m++)
		;

	if (monty_m < 2)
	{
		dprintf(2, "L%u: can't div, stack too short\n", monty_number);
		free_monty_var();
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", monty_number);
		free_monty_var();
		exit(EXIT_FAILURE);
	}

	aux = (*stack)->next;
	aux->n /= (*stack)->n;
	_monty_pop(stack, monty_number);
}
