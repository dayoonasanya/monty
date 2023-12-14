#include "monty.h"

void _monty_stack(stack_t **stack, unsigned int monty_number);
void _monty_queue(stack_t **stack, unsigned int monty_number);

/**
 * _monty_stack - function: data stack.
 * @stack: pointer to the head of the stack.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */

void _monty_stack(stack_t **stack, unsigned int monty_number)
{
	(void)stack;
	(void)monty_number;

	var_s.monty_l = 1;
}

/**
 * _monty_queue - function: monty queue.
 * @stack: pointer to the head of the queue.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */

void _monty_queue(stack_t **stack, unsigned int monty_number)
{
	(void)stack;
	(void)monty_number;

	var_s.monty_l = 0;
}
