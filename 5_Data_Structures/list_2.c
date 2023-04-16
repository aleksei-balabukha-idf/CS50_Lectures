#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // get memory from Stack
    //int list[3];
    // get memory from Heap
    // Dynamically allocate an array of size 3:
    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return 1;
    }
    // assign 3 numbers to array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // time passes


    // resize old array to be of size 4:
    // we benefit from this function, because we now do not need to copy each element
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // add 4th number to new array
    tmp[3] = 4;


    list = tmp;
    // print new array
    for (int i = 0; i<4; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0;

}