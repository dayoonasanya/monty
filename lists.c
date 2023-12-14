#include "monty.h"

stack_t *add_node_int(stack_t **head, const int n);

/**
 *add_node_int - Add node at start of stack.
 *@head: pointer to the head of the stack.
 *@n: pointer to the line number.
 *
 *Return: return the stack [linked list].
 */

stack_t *add_node_int(stack_t **head, const int n)
{
	stack_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(stack_t));
	if (!temp)
	{
		dprintf(2, "Error: malloc failed\n");
		free_monty_var();
		exit(EXIT_FAILURE);
	}
	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	(*head)->prev = temp;
	temp->next = (*head);
	temp->prev = NULL;
	*head = temp;
	return (*head);
}
