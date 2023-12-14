#include "monty.h"

void (*get_opcode_func(char *opc))(stack_t **stack, unsigned int line_number);

/**
 * get_opcode_func - This function will call the monty func.
 * @opc: parsing opcodes.
 *
 * Return: return the opcode functions.
 *
 */
void (*get_opcode_func(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t op_func[] = {
		{"push", _monty_push},
		{"pall", _monty_pall},
		{"pint", _monty_pint},
		{"pop", _monty_pop},
		{"swap", _monty_swap},
		{"queue", _monty_queue},
		{"stack", _monty_stack},
		{"add", _monty_add},
		{"nop", _monty_nop},
		{"sub", _monty_sub},
		{"mul", _monty_mul},
		{"div", _monty_div},
		{"mod", _monty_mod},
		{"pchar", _monty_pchar},
		{"pstr", _monty_pstr},
		{"rotl", _monty_rotl},
		{"rotr", _monty_rotr},
		{NULL, NULL}
	};
	int i;

	for (i = 0; op_func[i].opcode; i++)
	{
		if (_strcmp(op_func[i].opcode, opc) == 0)
			break;
	}

	return (op_func[i].f);
}
