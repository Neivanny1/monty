#include "lists.h"
/**
 * invalidInstruction_error - Prints message if le to open the filehas an invalid instruction.
 * @invInstruction: instruction
 * @line: line
 * Return: void
 **/
void invalidInstruction_error(char *invInstruction, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, invInstruction);
	exit(EXIT_FAILURE);
}
/**
 * not_int_err -Main entry
 *Description: print message if parameter received is not integer
 * @line: line
 * Return: void
 **/
void not_int_err(unsigned int line)
{
	fprintf(stderr, "L%u: usage: push integer\n", line);
	exit(EXIT_FAILURE);
}
/**
 * malloc_error -Main entry
 *Description: print message if cant malloc anymore
 * Return: void
 **/
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
#include "monty.h"
/**
 * div_error - Print error if the stack contains less than two elements
 * @line: line
 * Return: void
 */
void div_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * div_error2 - Print error if the top element of the stack is 0
 * @line: line
 * Return: void
 */
void div_error2(unsigned int line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}
/**
 * mul_error - if the stack contains less than two elements
 * @line: line
 * Return: void
 */

void mul_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(EXIT_FAILURE);
}
/**
 * mod_error - Error if the stack contains less than two elements
 * @line: The function´s parameter
 * Return: void
 */
void mod_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(EXIT_FAILURE);
}
