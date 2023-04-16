#include <cs50.h>
#include <stdio.h>

int main(void)
{// array approach
    string s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]);
// pointer arithmetic:
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));
}