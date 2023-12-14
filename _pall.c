#include "monty.h"

void _monty_pall(stack_t **stack, unsigned int monty_number);

/**
 * _monty_pall - function: print all values in monty stack.
 * @stack: pointer to the head of the stack.
 * @monty_number: line numbers [monty_number].
 *
 * Return: return nothing.
 */

void _monty_pall(stack_t **stack, unsigned int monty_number)
{
	stack_t *aux;
	(void)monty_number;

	aux = *stack;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
