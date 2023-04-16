#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    // linear search for strings
    for (int i=0; i<7; i++)
    {
        if (strcmp(names[i], "Ron") == 0) // there are no explicit comparison of strings in C so we use special function
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}