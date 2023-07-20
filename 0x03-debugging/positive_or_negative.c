#include "main.h"
#include <stdio.h>

void positive_or_negative(int n)
{
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("0 is neither positive nor negative\n");
}
