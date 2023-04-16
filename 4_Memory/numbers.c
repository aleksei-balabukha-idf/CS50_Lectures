#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    printf("%i\n", numbers[0]);
    printf("%i\n", numbers[1]);
    printf("%i\n", numbers[2]);

    printf("pointer arithmetic\n");

    // pointer arithmetic:
    printf("%i\n", *numbers);
    printf("%i\n", *(numbers+1));
    printf("%i\n", *(numbers+2));
}