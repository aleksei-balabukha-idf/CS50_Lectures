#include <cs50.h>
#include <stdio.h>

// we have the same address of the string and of the 1st character of the string
int main(void)
{
    string s = "HI!";
    char *p = &s[0];
    printf("%p\n", p);
    printf("%p\n", s);
}