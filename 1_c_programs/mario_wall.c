#include <cs50.h>
#include <stdio.h>

int main(void)
{


    int n;
    do
    {
        n = get_int("Size: "); // assume it is square
    }
    while (n<1);

    for(int rows=0; rows<n; rows++)
    {
        for(int i=0; i<n; i++)
        {
            printf("#");
        }
        printf("\n");
    }


}