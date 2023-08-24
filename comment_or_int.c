#include "lists.h"
/**
 * this_is_comment - check if string received is # or not
 * @token: string to check
 * @line_counter: line
 * Return: -1 if sring is not # or 1 if yes
 */
int this_is_comment(char *token, int line_counter)
{
        if (token == NULL || token[0] == '#')
        {
        line_counter++;
        return (1);
        }
        return (-1);
}
/**
 * this_is_number - check if string received is int or not
 * @token: string to check
 * Return: -1 if sring is not int or 1 if yes
 */
int this_is_number(char *token)
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

