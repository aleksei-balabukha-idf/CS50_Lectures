#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");
    // ask for the amount of memory = length of string + 1 byte for \0 character
    char *t = malloc(strlen(s) + 1);
    // copy every character from s into new space:
    for (int i=0, n = strlen(s)+1; i < n; i++)
    {
        t[i] = s[i];
    }
    // the same result using string copy function:
    strcpy(t, s);
    // now we can safely change characters of t w/o influencing s:
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
    // free the space we allocated
    free(t);
}