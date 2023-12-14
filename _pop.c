#include "monty.h"

void _monty_pop(stack_t **stack, unsigned int monty_number);

/**
 * _monty_pop - function:::removes the top element of monty stack.
 * @stack: pointer to the head of the stack.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */

void _monty_pop(stack_t **stack, unsigned int monty_number)
{
	stack_t *aux;

	if (stack == NULL || *stack == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", monty_number);
		free_monty_var();
		exit(EXIT_FAILURE);
	}
	aux = *stack;
	*stack = (*stack)->next;
	free(aux);
}
