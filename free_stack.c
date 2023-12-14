#include "monty.h"

void free_monty_stack(stack_t *head);

/**
 * free_monty_stack - free s the stack.
 * @head: pointer to the head of the stack.
 *
 * Return: return nothing.
 */
void free_monty_stack(stack_t *head)
{
	stack_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
