#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i=0, n=strlen(s); i<n; i++) // decalare 2 variable inside a loop for optimization
    {
        printf("%c", s[i]);
    }
    printf("\n");
}