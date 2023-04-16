#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // allocate memory enough to store 3 integers:
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33; // touching memory that we should not
    free(x);
}