#include <stdio.h>

int main(void)
{
    int a = 1;
    printf("a = %i\n", a);
    printf("address of a = %p\n", &a);
    // assign pointer variable to address of a:
    int *pointer_a = &a;
    printf("value of pointer_a = %p\n", pointer_a);
    // dereference address to see what is stored in that address:
    printf("dereference value = %i\n", *pointer_a);
}