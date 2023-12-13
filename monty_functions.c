#include "monty.h"

/**
 * _monty_push - pushees a value to a stack_t linked list
 *
 * @stack: pointer to the top mode node of a stack_t linked list
 * @line_number: current working line number of a Monty Bytecodes file
 *
 * Return: nothing
 */
void _monty_push(stack_t **stack, unsigned int line_number)
{
	int i, j;

	if (!var_s.arg)
	{
		dprintf(2, "L%u: ", line_number);
		dprintf(2, "usage: push integer\n");
		free_monty_var();
		exit(EXIT_FAILURE);
	}

	for (j = 0; var_s.arg[j] != '\0'; j++)
	{
		if (!isdigit(var_s.arg[j]) && var_s.arg[j] != '-')
		{
			dprintf(2, "L%u: ", line_number);
			dprintf(2, "usage: push integer\n");
			free_monty_var();
			exit(EXIT_FAILURE);
		}
	}

	i = atoi(var_s.arg);

	if (var_s.monty_l == 1)
		add_node_int(stack, i);
	else
		add_node_end(stack, i);
}

/**
 * _monty_pall - prints all the values of a stack_t linked list
 *
 * @stack: pointer to the top mode node of a stack_t linked list
 * @line_number: current working line number of a Monty Bytecodes file
 *
 * Return: nothing
 */
void _monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * _monty_pint - prints the top value of a stack_t linked list
 *
 * @stack: pointer to the top mode node of a stack linked list
 * @monty_number: current working line number of a Monty Bytecodes file
 *
 * Return: nothing
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

/**
 * _monty_pop - removes the top value of a stack_t linked list
 *
 * @stack: pointer to the top mode node of a stack linked list
 * @monty_number: current working line number of a Monty Bytecodes file
 *
 * Return: nothing
 */
void _monty_pop(stack_t **stack, unsigned int monty_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", monty_number);
		free_monty_var();
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}

/**
 * _monty_swap - swaps the top two value elements of a stack_t linked list
 *
 * @stack: pointer to the top mode node of a stack_t linked list
 * @monty_number: current working line number of a Monty Bytecodes file
 *
 * Return: nothing
 */
void _monty_swap(stack_t **stack, unsigned int monty_number)
{
	int i = 0;
	stack_t *tmp = NULL;

	tmp = *stack;

	for (; tmp != NULL; tmp = tmp->next, i++)
		;

	if (i < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", monty_number);
		free_monty_var();
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	tmp->prev = *stack;
	(*stack)->next = tmp;
	(*stack)->prev = NULL;
}
