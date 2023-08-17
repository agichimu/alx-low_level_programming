#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return NULL;

    int total_length = 0;
    int i, j;

    /* Calculate the total length of the new string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_length++;
        total_length++; /* Account for the newline character '\n' */
    }

    /* Allocate memory for the new string */
    char *result = (char *)malloc((total_length + 1) * sizeof(char));
    if (result == NULL)
        return NULL;

    /* Copy the arguments into the new string, adding newline characters */
    int current_index = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            result[current_index] = av[i][j];
            current_index++;
        }
        result[current_index] = '\n'; /* Add newline character */
        current_index++;
    }
    result[current_index] = '\0'; /* Add the null terminator */

    return result;
}
