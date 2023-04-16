#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    // print address of n:
    printf("%p\n", p);
    // print value which is inside of specific address:
    printf("%i\n", *p);
}