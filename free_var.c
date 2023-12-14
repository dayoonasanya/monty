#include "monty.h"

info_t var_s;
void start_monty_var(FILE *fs);
void free_monty_var(void);

/**
 * start_monty_var - initialize the global variables monty.
 * @fs: file descriptor for monty.
 *
 * Return: return nothing.
 */
void start_monty_var(FILE *fs)
{
	var_s.monty_l = 1;
	var_s.monty_cont = 1;
	var_s.arg = NULL;
	var_s.head = NULL;
	var_s.fs = fs;
	var_s.buffer = NULL;
}

/**
 * free_monty_var - free the global variable [var].
 *
 * Return: return nothing.
 */
void free_monty_var(void)
{
	free_monty_stack(var_s.head);
	free(var_s.buffer);
	fclose(var_s.fs);
}
