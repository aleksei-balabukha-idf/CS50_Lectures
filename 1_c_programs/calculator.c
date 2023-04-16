#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // promt user for x and y, print sum
    long x = get_long("x: ");
    long y = get_long("y: ");
    printf("%li\n", x + y);
}