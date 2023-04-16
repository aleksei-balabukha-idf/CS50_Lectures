#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // promt user for x and y, print sum
    float x = get_float("x: ");
    float y = get_float("y: ");

    // divide x by y:
    float z = x / y;

    printf("%.50f\n", z);
}