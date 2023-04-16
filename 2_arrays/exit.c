#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2) // we want exactly one parameter in a command line (1st is name of a program)
    {
        printf("Missing command-line argument\n");
        return 1; // return from main non zero value means something is wrong
    }
    printf("hello, %s\n", argv[1]);
    return 0; // return 0 if everything is ok
}