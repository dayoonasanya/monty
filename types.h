#ifndef MONTY_FUNCTIONS_H
#define MONTY_FUNCTIONS_H

#include "struct.h"

/**monty functions.**/
void _monty_push(stack_t **stack, unsigned int line_number);
void _monty_pall(stack_t **stack, unsigned int line_number);
void _monty_pint(stack_t **stack, unsigned int monty_number);
void _monty_pop(stack_t **stack, unsigned int monty_number);
void _monty_swap(stack_t **stack, unsigned int monty_number);
void _monty_queue(stack_t **stack, unsigned int monty_number);
void _monty_stack(stack_t **stack, unsigned int monty_number);
void _monty_add(stack_t **stack, unsigned int monty_number);
void _monty_nop(stack_t **stack, unsigned int monty_number);
void _monty_sub(stack_t **stack, unsigned int monty_number);
void _monty_div(stack_t **stack, unsigned int monty_number);
void _monty_mul(stack_t **stack, unsigned int monty_number);
void _monty_mod(stack_t **stack, unsigned int monty_number);
void _monty_pchar(stack_t **stack, unsigned int monty_number);
void _monty_pstr(stack_t **stack, unsigned int monty_number);
void _monty_rotl(stack_t **stack, unsigned int monty_number);
void _monty_rotr(stack_t **stack, unsigned int monty_number);


int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

/**opcodes.**/
void (*get_opcode_func(char *opc))(stack_t **stack, unsigned int line_number);

FILE *check_input(int argc, char *argv[]);
void start_monty_var(FILE *fs);

int monty_sch(char *s, char c);
char *_strtok(char *s, char *d);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strcmp(char *s1, char *s2);

/*manage stack*/
stack_t *add_node_end(stack_t **head, const int n);
stack_t *add_node_int(stack_t **head, const int n);
void free_monty_stack(stack_t *head);


void free_monty_var(void);

#endif
