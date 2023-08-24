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
		if (this_is_comment(token, line_counter) == 1)
			continue;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n\t\r ");
			if (token == NULL || this_is_number(token) == -1)
			{
				fprintf(stderr, "L%u: usage: push integer\n", line_counter);
				exit(EXIT_FAILURE);
			}
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
