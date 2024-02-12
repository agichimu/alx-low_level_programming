#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int size = 10;
    char *array;

    array = create_array(size, 'H');
    if (array == NULL)
    {
        printf("Failed to create array\n");
        return (1);
    }

    for (unsigned int i = 0; i < size; i++)
        _putchar(array[i]);
    
    _putchar('\n');

    free(array);

    return (0);
}
