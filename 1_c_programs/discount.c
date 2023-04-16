#include <cs50.h>
#include <stdio.h>

float discount(float price, float percent_off);

int main(void)
{
    float regular = get_float("Regular Price: ");
    float percent_off = get_float("Percent off: ");
    float sale = discount(regular, percent_off);
    printf("Sale Price: %.2f\n", sale);
}

// discount function
float discount(float price, float percent_off)
{
    return price * (1 - percent_off / 100);
}