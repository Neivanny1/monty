#include "monty.h"
#include <stdio.h>
int number;
/**
 * open_and_read -main entry.
 *Description:Function that open, read and execute.
 * @argv: arguments received by parameter
 * Return: void
 **/
void windows_explorer(char **argv)
{
	void (*p_func)(stack_t **, unsigned int);
	FILE *fp;
	char buf[1024], *token = NULL, command[1024];
	unsigned int line_counter = 1;
	stack_t *top = NULL;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		char *filename = argv[1];

		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (fgets(buf, sizeof(buf), fp) != NULL)
	{
		buf[strcspn(buf, "\n")] = '\0';
		token = strtok(buf, "\n\t\r ");
		if (token == NULL)
			continue;
		strcpy(command, token);
		if (is_comment(token, line_counter) == 1)
			continue;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n\t\r ");
			if (token == NULL || is_number(token) == -1)
				not_int_err(line_counter);
			number = atoi(token);
			p_func = get_op_code(command, line_counter);
			p_func(&top, line_counter);
		}
		else
		{
			p_func = get_op_code(token, line_counter);
			p_func(&top, line_counter);
		}
		line_counter++;
	}
	fclose(fp);
	free_stack(top);
}
/**
 * is_number - check if string received is int or not
 * @token: string to check
 * Return: -1 if sring is not int or 1 if yes
 */
int is_number(char *token)
{
	int i;

	if (token == NULL)
		return (-1);

	for (i = 0; token[i] != '\0'; i++)
	{
		if (token[i] != '-' && isdigit(token[i]) == 0)
			return (-1);
	}
	return (1);
}
/**
 * is_comment - check if string received is # or not
 * @token: string to check
 * @line_counter: line
 * Return: -1 if sring is not # or 1 if yes
 */
int is_comment(char *token, int line_counter)
{
	if (token == NULL || token[0] == '#')
	{
	line_counter++;
	return (1);
	}
	return (-1);
}
