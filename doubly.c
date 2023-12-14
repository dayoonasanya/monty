#include "monty.h"

stack_t *add_node_end(stack_t **head, const int n);

/**
 *add_node_end - Add node at end of the the stack.
 *@head: pointer to the head of the stack.
 *@n: pointer to the line number.
 *
 *Return: return the stack [linked list].
 */

stack_t *add_node_end(stack_t **head, const int n)
{
	stack_t *temp, *aux;

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
	aux = *head;
	while (aux->next)
		aux = aux->next;
	temp->next = aux->next;
	temp->prev = aux;
	aux->next = temp;
	return (aux->next);
}
