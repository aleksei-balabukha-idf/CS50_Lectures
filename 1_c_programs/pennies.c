#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // get amount in dollars:
   float amount = get_float("Dollar amount: ");
   int pennies = round(amount * 100);
   printf("amount in pennies = %i\n", pennies);
}