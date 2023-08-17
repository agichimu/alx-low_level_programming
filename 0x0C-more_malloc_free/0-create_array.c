#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it with a specific character.
 * @size: Size of the array.
 * @c: Character to initialize the array with.
 *
 * Return: Pointer to the created array, or NULL if size is 0 or if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array = malloc(sizeof(char) * size);
    if (array == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
        array[i] = c;

    return array;
}
