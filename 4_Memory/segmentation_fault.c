#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // allocate 2 points that can point to integers:
    int *x;
    int *y;
    // allocate new integer pointee and assign it to a pointer
    x = malloc(sizeof(int));
    // dereference point x to store int into it's pointee:
    *x = 42;
    // not if we try to dereference y we will get Segmentation Fault:
    // because we did not allocate pointee for pointer y
    *y = 13;
}