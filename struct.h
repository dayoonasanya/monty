#ifndef STRUCT_MONTY_H
#define STRUCT_MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 *
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct info_s - data or program information.
 * @monty_l: This will be the stack or the queue.
 * @monty_cont: This will point to the current line.
 * @fs: This will be the file descriptor for the program.
 * @head: The doubly linked list for monty.
 * @arg: parameter on the line.
 * @buffer: This will point to the imput text.
 *
 *
 */

typedef struct info_s
{
	int monty_l;
	unsigned int monty_cont;
	char  *arg;
	stack_t *head;
	FILE *fs;
	char *buffer;
} info_t;

/*global variable*/
extern info_t var_s;



#endif
