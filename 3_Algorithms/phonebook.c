#include <cs50.h>
#include <stdio.h>
#include <string.h>

// new data structre - similar to dictionary - called person
// it requires name and number
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // create array of new data type
    person people[2];
    // fill new array with data:
    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";
    people[1].name = "David";
    people[1].number = "+1-949-468-2750"


    for (int i=0; i<2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}