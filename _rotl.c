#include "monty.h"

void _monty_rotl(stack_t **stack, unsigned int monty_number);

/**
 * _monty_rotl - function: rotate element at bottom of stack.
 * @stack: head of the stack.
 * @monty_number: line number[monty_number].
 *
 * Return: return just nothing.
 */

void _monty_rotl(stack_t **stack, unsigned int monty_number)
{
	stack_t *aux1 = NULL;
	stack_t *aux2 = NULL;
	(void)monty_number;

	if (*stack == NULL)
		return;

	if ((*stack)->next == NULL)
		return;

	aux1 = (*stack)->next;
	aux2 = *stack;

	for (; aux2->next != NULL; aux2 = aux2->next)
		;

	aux1->prev = NULL;
	aux2->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = aux2;
	*stack = aux1;
}
