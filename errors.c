#include "monty.h"
/**
 * handles_invalidInstruction_error - Prints message if le to open the filehas an invalid instruction.
 * @invInstruction: instruction
 * @line: line
 * Return: void
 **/
void handles_invalidInstruction_error(char *invInstruction, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, invInstruction);
	exit(EXIT_FAILURE);
}
/**
 * handles_not_int_error -Print message if parameter received is not integer.
 * @line: line
 *
 * Return: void
 **/
void not_int_err(unsigned int line)
{
	fprintf(stderr, "L%u: usage: push integer\n", line);
	exit(EXIT_FAILURE);
}

/**
 * handles_div_error - Print error if the stack contains less than two elements
 * @line: line
 *
 * Return: void
 */

void handles_div_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * handles_div_errors - Print error if the top element of the stack is 0
 * @line: line
 *
 * Return: void
 */

void handles_div_errors(unsigned int line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(EXIT_FAILURE);
}

/**
 * hanles_mul_error - if the stack contains less than two elements
 * @line: line
 *
 * Return: void
 */

void handles_mul_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * handles_mod_error - Error if the stack contains less than two elements
 * @line: The function´s parameter
 * Return: void
 */
void handles_mod_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(EXIT_FAILURE);
}
