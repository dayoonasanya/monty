#include "monty.h"

void _monty_pstr(stack_t **stack, unsigned int monty_number);
void _monty_pchar(stack_t **stack, unsigned int monty_number);

/**
 * _monty_pstr - function: print string.
 * @stack: pointer to the head of the stack.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */

void _monty_pstr(stack_t **stack, unsigned int monty_number)
{
	stack_t *aux;
	(void)monty_number;

	aux = *stack;

	while (aux && aux->n > 0 && aux->n < 128)
	{
		printf("%c", aux->n);
		aux = aux->next;
	}

	printf("\n");
}

/**
 * _monty_pchar - print characters in monty stack.
 * @stack: pointer to the head of the stack.
 * @monty_number: line number [monty_number].
 *
 * Return: return nothing.
 */

void _monty_pchar(stack_t **stack, unsigned int monty_number)
{
	if (stack == NULL || *stack == NULL)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", monty_number);
		free_monty_var();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n >= 128)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", monty_number);
		free_monty_var();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
