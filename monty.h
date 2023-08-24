#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
extern int number;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void handles_invalidInstruction_error(char *invInstruction, unsigned int line);
void handles_malloc_error(void);

void handles_pint_error(unsigned int line);
void handles_not_int_errors(unsigned int line);
void handles_pop_error(unsigned int line);
void handles_swap_error(unsigned int line);
void handles_add_error(unsigned int line);
void handles_sub_error(unsigned int line);
void handles_div_error(unsigned int line);
void handles_div_errors(unsigned int line);
void handles_mul_error(unsigned int line);
void handles_mod_error(unsigned int line);

void windows_explorer(char **argv);
int this_is_number(char *token);
int this_is_comment(char *token, int line_counter);
void (*get_code(char *token, unsigned int line)) (stack_t **, unsigned int);
void push_stack(stack_t **top, unsigned int line_number);
void pall_stack(stack_t **top, unsigned int line_number);
void free_stack(stack_t *top);
void pint_stack(stack_t **top, unsigned int line_number);
void pop_stack(stack_t **top, unsigned int line_number);

void _swap(stack_t **top, unsigned int line);
void _add(stack_t **top, unsigned int line);
void _sub(stack_t **top, unsigned int line_number);
void _div(stack_t **top, unsigned int line_number);
void _mul(stack_t **top, unsigned int line);
void _mod(stack_t **top, unsigned int line_number);
void _nop(stack_t **top, unsigned int line);
#endif
