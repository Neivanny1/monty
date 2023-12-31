#include "monty.h"
/**
 * push_stack - Function that push a new node at the beginning of stack_t stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void push_stack(stack_t **top, unsigned int line_number)
{
	stack_t *newNode;

	(void) line_number;
	newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = number;
	newNode->prev = NULL;
	if (*top == NULL)
	{
		newNode->next = NULL;
		*top = newNode;
	}
	else
	{
	newNode->next = *top;
	(*top)->prev = newNode;
	*top = newNode;
	}
}
/**
 * pall_stack - Function that print the elements of a stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pall_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;
	(void)line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * free_stack - Function that frees a dlist_t list
 * @top: top of the stack. (head)
 * Return: void
 **/
void free_stack(stack_t *top)
{
	stack_t *temp;

	if (top == NULL)
		return;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
	free(top);
}
/**
 * pint_stack - Function that print the valueat top of stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pint_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;

	if (tmp != NULL)
		printf("%d\n", tmp->n);
	else
		handles_pint_error(line_number);
}
/**
 * pop_stack - Function that pop (delete) the value at top of stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pop_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *top;
	if (*top == NULL)
		handles_pop_error(line_number);

	tmp = tmp->next;
	free(*top);
	*top = tmp;
}
