#include "monty.h"

void _monty_rotr(stack_t **stack, unsigned int monty_number);

/**
 * _monty_rotr - rotate the first element of the stack.
 * @stack: monty stack.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */


void _monty_rotr(stack_t **stack, unsigned int monty_number)
{
	stack_t *aux = NULL;
	(void)monty_number;

	if (*stack == NULL)
		return;

	if ((*stack)->next == NULL)
		return;

	aux = *stack;

	for (; aux->next != NULL; aux = aux->next)
		;

	aux->prev->next = NULL;
	aux->next = *stack;
	aux->prev = NULL;
	(*stack)->prev = aux;
	*stack = aux;
}
