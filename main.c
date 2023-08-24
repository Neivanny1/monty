#include"lists.h"
/**
 * main - Monty bytecodes files interpreter.
 * @argc: total of arguments
 * @argv: The arguments, monty files
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	windows_explorer(argv);
	return (0);
}
