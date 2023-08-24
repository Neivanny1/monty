#include"monty.h"

/**
 * handles_add_error - Print error if the stack contains less than two elements
 * @line: line
 *
 * Return: void
 */

void handles_add_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * handles_swap_error - print err msg if stack contains less than two elements
 * @line: line
 *
 * Return: void
 */

void handles_swap_error(unsigned int line)
{
        fprintf(stderr, "L%u: can't swap, stack too short\n", line);
        exit(EXIT_FAILURE);
}

/**
 * handles_sub_error - Print error if the stack contains less than two elements
 * @line: line
 *
 * Return: void
 */

void handles_sub_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * handles_pop_error - print error message if the stack is empty
 * @line: line
 *
 * Return: void
 */

void handles_pop_error(unsigned int line)
{
        fprintf(stderr, "L%u: can't pop an empty stack\n", line);
        exit(EXIT_FAILURE);
}

/**
 * handles_pint_error - print error message if the stack is empty
 * @line: line
 * Return: void
 */


void handles_pint_error(unsigned int line)
{
        fprintf(stderr, "L%u: can't pint, stack empty\n", line);
        exit(EXIT_FAILURE);
}
