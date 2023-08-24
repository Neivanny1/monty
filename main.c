#include"lists.h"
/**
 * main - Main entry
 * Description: Monty bytecodes files interpreter
 * @argc: total of arguments
 * @argv: The arguments, monty files
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc != 2)
    {
		error_arguments();
        char *filename = argv[1];

        fprintf(stderr,"Error: Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }
	open_and_read(argv);
	return (0);
}
